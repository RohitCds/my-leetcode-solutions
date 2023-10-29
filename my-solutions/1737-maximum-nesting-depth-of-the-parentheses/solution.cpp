class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi = 0;
        for(auto c: s){
            if(c=='('){
                st.push(c);
                maxi = (maxi>st.size())?maxi:st.size();
            }
            else if(c==')'){
                st.pop();
            }
        }
        return maxi;
    }
};
