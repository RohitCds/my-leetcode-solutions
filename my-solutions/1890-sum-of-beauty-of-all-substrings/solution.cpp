class Solution {
public:
    int beautySum(string s) {
        int beauty_sum = 0;
        int n = s.length();
        for(int i =0; i<n ; i++){
            vector<int> ch_freq (26,0);
            for(int j = i; j< n; j++){
                ch_freq[s[j] - 'a']+=1;
                int maxi = *max_element(ch_freq.begin(), ch_freq.end());
                int mini = *min_element(ch_freq.begin(), ch_freq.end(), [](int a, int b){
                    return a>0 && (b==0||a<b);
                });
                beauty_sum+= maxi-mini;
            }
        }
        return beauty_sum;
        
    }
};
