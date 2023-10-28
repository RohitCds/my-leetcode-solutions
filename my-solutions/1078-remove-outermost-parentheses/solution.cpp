#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        stack<char> st;
        string res = "";
        for(auto c: s){
            if(c=='('){
                if(!st.empty()){
                    res+=c;
                }
                st.push(c);
            }
            else if(c==')'){
                st.pop();
                if(!st.empty()){
                    res+=c;
                }
            }
        }

        return res;
    }
};

