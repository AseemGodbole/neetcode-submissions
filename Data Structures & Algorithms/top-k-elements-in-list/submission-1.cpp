class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        vector<int> ans; 
        for(int i = n; i>=0; i--){
            for(auto it: mp){
                if(it.second==i){
                    ans.push_back(it.first);
                    if(ans.size()==k) return ans;
                }
            }
        }
        return ans;
    }
};
