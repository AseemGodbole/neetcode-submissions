class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> seen;
        for(int i = 0 ; i< n ; i++){
            int curr = nums[i];
            int x = target - nums[i];
            for(int n : nums){
                if(seen.count(x)) return {seen[x],i};
            }
            seen[curr]=i;
        }

    }
};
