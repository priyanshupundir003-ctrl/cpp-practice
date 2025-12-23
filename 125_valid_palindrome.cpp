class Solution {
public:
    bool isPalindrome(string s) {
        // palindrome--> jo aage aur piche se same ho
        // example 1--> "madam" = true
        // example 2--> " hello" = false
        int left = 0; //start index
        int right = s.length() - 1; //end index
        while (left < right) {
            if(!isalnum(s[left]))
            {
                left++;
            }
            else if(!isalnum(s[right])) {
                right--;
            }
            else{
                char l = tolower(s[left]);
                char r = tolower(s[right]);
                if (l != r)
                return false;

                left++;
                right--;
            }
        }
        return true;
    }
};
