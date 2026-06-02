class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[256]={0};
        int n1 = s.length();
        int n2 = t.length();
        if(n1!=n2) return false;
        for(char x : s){
            freq[x]++;
        }
        for(char x : t){
            freq[x]--;
        }
        for(int i = 0; i<256; i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};
