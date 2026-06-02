class Solution {
public:
    bool aretheyanagrams(string a, string b){
        int a1= a.size();
        int b1= b.size();
        if(a1!=b1) return false;
        int hash[26]={0};
        for(int i =0; i<a1; i++){
            hash[a[i]-97]++;
        }
        for(int i =0; i<a1; i++){
            hash[b[i]-97]--;
        }
        for(int i=0; i<26; i++){
            if(hash[i]!=0) return false;
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans; 
        int n = strs.size();
        vector<bool> visited(n, false);
        for(int i =0; i<n; i++){
            string x = strs[i];
            if(visited[i] == true) continue;
            vector<string> currentGroup;
            currentGroup.push_back(strs[i]);
            visited[i] = true;
            for(int j = i+1; j<n; j++){
                if(!visited[j] && aretheyanagrams(x, strs[j])) {
                    currentGroup.push_back(strs[j]);
                    visited[j] = true;                }
            }
            ans.push_back(currentGroup);
        }
        return ans;
    }
};
