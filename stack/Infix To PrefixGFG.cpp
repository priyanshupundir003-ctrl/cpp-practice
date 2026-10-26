class Solution {
  public:
  int priority(char ch){
      if(ch == '^') return 3;
      else if(ch == '*' or ch == '/' or ch == '%') return 2;
      else if(ch == '+' or ch == '-') return 1;
      return 0;
  }
    string infixToPrefix(string s) {
        stack<char> st;
        string ans ="";
        
        // step 1: reverse expression
        reverse(s.begin(),s.end());
        
        // step 2: swap brackets
        for(int i=0;i< s.size();i++){
            if(s[i] == '(') s[i] = ')';
            else if(s[i] == ')') s[i] = '(';
        }
        // step 3: infix to postfix
        for(char ch: s){
            if((ch >='a' && ch <= 'z') or
            (ch >='A' && ch <= 'Z') or
            (ch >='0' && ch <= '9')){
                ans += ch;
            }
            // opening bracket
            else if(ch == '('){
                st.push(ch);
            }
            // closing bracket
            else if(ch == ')'){
                while(st.size() > 0 && st.top( ) != '('){
                    ans += st.top();
                    st.pop();
                }
                if(st.size() > 0) st.pop();
            }
            
            // operator
            else{
                while(st.size() > 0 && st.top() != '('){
                    if(priority(st.top()) > priority(ch) or
                    (priority(st.top()) == priority(ch) && ch == '^')){
                        ans += st.top();
                        st.pop();
                    }
                    else{
                        break;
                    }
                }
                st.push(ch);
            }
        }
        
        // remaning operators
        while(st.size() > 0){
            ans += st.top();
            st.pop();
        }
        
        // reverse postfix to get prefix
        reverse (ans.begin(), ans.end());
        
        return ans;
    }
};
