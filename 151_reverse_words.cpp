class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i = s.length() - 1;
        
        while(i >= 0){
            while(i >= 0 && s[i] == ' ') i--; //skip spaces
            if(i < 0) break;
            int j = i;
            while(j >= 0 && s[j] != ' ') j--;  // find word start
            result += s.substr(j+1, i - j);
            result += " ";
            i = j;
        }
        return result.substr(0,result.length() - 1);
    }
};
