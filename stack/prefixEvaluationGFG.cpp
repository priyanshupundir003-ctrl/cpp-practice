class Solution {
  public:
  int operation(int& a,int& b, string& op){
          if(op == "+") return a+b;
         else if(op == "-") return a-b;
        else if(op == "*") return a*b;
          else if(op == "^") return pow(a,b);
          else{ // op == "/"
              // return a/b;  // wrong
              return floor(float(a) / b);
          }
      }
    int evaluatePrefix(vector<string>& arr) {
        stack<int> st;
        int n=arr.size();
           for(int i=n-1;i>=0;i--){
               string s=arr[i];
               if(s=="+" or s=="-" or s=="*" or s=="/" or s=="^" ){ // work
                   int a= st.top();
                   st.pop();
                   int b=st.top();
                   st.pop();
                   st.push(operation(a,b,s));
               }
               else st.push(stoi(s));
           }
           return st.top();
    }
};
