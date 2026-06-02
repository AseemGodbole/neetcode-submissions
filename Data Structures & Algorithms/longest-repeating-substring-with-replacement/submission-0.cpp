class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int ans=0;
        for(int i = 0; i<26; i++){
            int l = 0; 
            int r = 0; 
            int cnt = 0;
            char x = 'A'+i;
            while(r<n){
                if(s[r]!=x) cnt++;
                while(cnt>k && l<n){
                    if(s[l]!=x) cnt--;
                    l++;
                }
                ans = max(ans, r-l+1);
                r++;
            }
        }
        return ans;
    }
};
