class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(int i=0;i<s.size();i++){
            
            if(!a.empty() && s[i]==')' && a.top()=='('){
                a.pop();
            }
            else if(!a.empty() && s[i]==']' && a.top()=='['){
                a.pop();
            }
            else if(!a.empty() && s[i]=='}' && a.top()=='{'){
                a.pop();
            }
            else{
                a.push(s[i]);
            }
           
        }
        if(a.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};