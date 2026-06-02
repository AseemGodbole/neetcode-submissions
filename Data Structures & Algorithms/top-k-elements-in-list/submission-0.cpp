class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapp;
        for(int num : nums){
            mapp[num]++;
        }
        vector<vector<int>> buckets(nums.size()+1);
        for(auto pair : mapp){
            int num = pair.first;
            int val = pair.second;
            buckets[val].push_back(num);
        }
        vector<int> ans; 
        for(int i = buckets.size() - 1; i > 0; i--){
            for(int num : buckets[i]){
                ans.push_back(num);
                if(ans.size()==k) return ans;
            }
        }
        return ans;
        
    }
};
