class Solution {
public:
    bool anagram(string str1, string str2){
        int n1 = str1.length();
        int n2 = str2.length();
        if(n1!=n2) return false;
        int freq[256]={0};
        for(char x : str1){
            freq[x]++;
        }
        for(char x : str2){
            freq[x]--;
        }
        for(int i =0; i<256; i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        vector<int> seen(n,0);
        for(int i = 0; i<n; i++){
            if(seen[i]==1) continue;
            vector<string> add;
            add.push_back(strs[i]);
            for(int j = i+1; j<n; j++){
                if(anagram(strs[j],strs[i]) && seen[j]!=1) {
                    add.push_back(strs[j]);
                    seen[j]=1;
                }
            }
            ans.push_back(add);
        }
        return ans;
    }
};
