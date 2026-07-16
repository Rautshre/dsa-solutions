class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it: s){
            if(it=='(' || it=='{' || it=='['){
                st.push(it);
            }
            else{
                if(st.empty()){
                   return false; 
                }
                else{
                    char ch = st.top();
                    st.pop();
                    if(ch=='(' && it!=')') return false;
                    if(ch=='[' && it!=']') return false;
                    if(ch=='{' && it!='}') return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};