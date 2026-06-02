class Solution {
public:
    vector<int> nme(vector<int> arr){
        int n = arr.size();
        vector<int> ans(n,-1);
        int maxi = 0;
        for(int i = n-1; i>=0; i--){
            ans[i]=maxi;
            maxi=max(maxi,arr[i]);
        }
        return ans;
    }
    vector<int> pme(vector<int> arr){
        int n = arr.size();
        vector<int> ans(n,-1);
        int maxi = 0;
        for(int i = 0; i<n; i++){
            ans[i]=maxi;
            maxi= max(maxi,arr[i]);
        }
        return ans;
    }
    int trap(vector<int>& height) {
        int n = height.size();
        int ans=0;
        vector<int> ne = nme(height);
        vector<int> pe = pme(height);
        for(int i = 0; i<n; i++){
            int ht = min(ne[i],pe[i]);
            int add = ht - height[i];
            if(add>0) ans+=add;
        }
        return ans;
    }
};
