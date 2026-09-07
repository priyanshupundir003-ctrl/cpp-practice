class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word="";
        // words ko alag alag karna
        for(int i=0;i<s.length();i++){
            if(s[i] !=' '){
                word+=s[i];
            }
            else{
                if(word !=""){
                    words.push_back(word);
                    word="";
                }
            }
        }
        //last word
        if(word !=""){
            words.push_back(word);
        }
        // words ka order ulta karna
        reverse(words.begin(),words.end());
        // answer banana
        string ans="";
        for(int i=0;i<words.size();i++){
            if(i>0){
                ans+=" ";
            }
            ans+=words[i];
        }
        return ans;
    }
};
