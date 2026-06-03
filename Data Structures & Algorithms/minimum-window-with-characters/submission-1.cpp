class Solution {
public:
    bool check(vector<int> arr1, vector<int> arr2){
        for(int i = 0; i<256; i++){
            if(arr1[i]>0){
                if(arr1[i]>arr2[i]) return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        vector<int> freq1(256,0);
        for(char x : t){
            freq1[x]++;
        }
        vector<int> freq2(256,0);
        int l = 0;
        int r = 0;
        if(n1<n2) return "";
        int left = 0;
        int right =n1; 
        while(r<n1){
            freq2[s[r]]++;
            while(check(freq1,freq2)){
                if(r-l<right-left){
                    right = r;
                    left = l;
                }
                freq2[s[l]]--;
                l++;
            }
            
            r++;
        }
        if(right == n1) return "";
        return s.substr(left,right-left+1);
    }
};
