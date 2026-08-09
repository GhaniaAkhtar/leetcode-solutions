#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;  // koi opening bracket hi nahi tha
                
                char top = st.top();
                st.pop();
                
                if(s[i]==')' && top!='(') return false;
                if(s[i]==']' && top!='[') return false;
                if(s[i]=='}' && top!='{') return false;
            }
        }
        
        return st.empty();  // agar stack khali hai tw sab match ho gaya
    }
};
