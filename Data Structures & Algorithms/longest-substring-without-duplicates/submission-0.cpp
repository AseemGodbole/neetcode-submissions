class Solution {
public:
    bool check(vector<int> arr){
        for(int i = 0; i<256; i++){
            if(arr[i]>1) return true;
        }
        return false;
    }
    
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256,0);
        int n = s.length();
        int l = 0; 
        int r = 0;
        int ans = 0;
        while(r<n){
            freq[s[r]]++;
            while(check(freq) && l<n){
                freq[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};
