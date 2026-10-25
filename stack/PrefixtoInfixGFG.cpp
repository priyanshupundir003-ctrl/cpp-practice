class Solution {
  public:
    string preToInfix(string &s) {
               stack<string> st;
               int n=s.length();
                   for(int i=n-1;i>=0;i--){
                       char ch=s[i];
                     if(ch =='+' or ch =='-' or ch =='*' or ch =='/' or ch=='%' or ch=='^' ){ // work
                     string a= st.top();
                       st.pop();
                       string b=st.top();
                      st.pop();
                   st.push("(" + a + string(1,ch) + b + ")");
                       }
                     else st.push(string(1,ch));
                   }

                   return st.top();
           }
};
