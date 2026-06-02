class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod1 = 1;
        int prod2 = 1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0){
                prod2 = prod1;
            }
            if(nums[i]!=0) prod2*=nums[i];
            prod1*= nums[i];
        } 
        vector<int> ans;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j]==0) ans.push_back(prod2);
            else ans.push_back(prod1/nums[j]);
        }
        return ans;
    }
};
