class Solution {
public:
    int cnt(int n){
        int ans = 0;
        for(int i =0;i<32; i++){
            if(n&(1<<i)) ans++;
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i= 0; i<=n; i++){
            ans.push_back(cnt(i));
        }
        return ans;
    }
};
