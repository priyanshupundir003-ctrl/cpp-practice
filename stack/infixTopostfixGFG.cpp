class Solution {
  public:
  
  int priority(char ch){
      if(ch == '^') return 3;
      else if(ch == '*' or ch == '/' or ch == '%') return 2;
      else if(ch == '+' or ch == '-') return 1;
      return 0;
  }
    string infixToPostfix(string& s) {
       stack<char> st;
       string ans="";
       for(char ch: s){
           // operand 
           if((ch >='a' && ch <= 'z') or (ch >='A' && ch <= 'Z') or (ch >='0' && ch <= '9')){
               ans += ch;
           }
           // opening bracket
           else if(ch == '('){
               st.push(ch);
           }
           // closing bracket
           else if(ch == ')'){
               while(st.size() > 0 && st.top() != '('){
                   ans += st.top();
                   st.pop();
               }
               if(st.size() > 0) st.pop();
           }
           // operator
           else{
               while(st.size() > 0 && st.top() != '('){
                   char topOp=st.top();
                   
                   // agar stack wala operator higher priority hai
                   if(priority(topOp) > priority(ch)){
                       ans += topOp;
                       st.pop();
                   }
                   // same prriority hai aur current operator ^ nahi hai
                   else if(priority(topOp) == priority(ch) && ch != '^'){
                       ans += topOp;
                       st.pop();
                   }
                   else{
                       break;
                   }
               }
               st.push(ch);
           }
       }
        // remaining operators
        while(st.size() > 0){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
