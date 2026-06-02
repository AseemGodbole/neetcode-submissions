class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        int ans = 0;
        for(int i = 0; i<n; i++){  
            if(mp.count(nums[i]-1)) continue;
            int curr = nums[i];
            int cnt = 1;
            while(mp.count(curr+1)){
                cnt++;
                curr++;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};
