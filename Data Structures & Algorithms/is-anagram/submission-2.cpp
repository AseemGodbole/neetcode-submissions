class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1[26]={0};
        int hash2[26]={0};
        int s1 = s.size();
        int t1 = t.size();
        if(s1!=t1) return false;
        for(int i = 0; i<s1; i++){
            hash1[s[i]-97]++;
        }
        for(int j =0 ; j<s1; j++){
            hash2[t[j]-97]++;
        }
        for(int i=0; i<26; i++){
            if(hash1[i]!=hash2[i]) return false;
        }
        return true;
    }
};
