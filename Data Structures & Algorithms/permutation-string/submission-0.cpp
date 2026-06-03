    class Solution {
    public:
        bool check(vector<int> freq){
            for(int i =0; i<256; i++){
                if(freq[i]!=0) return false;
            }
            return true;
        }
        bool checkInclusion(string s1, string s2) {
            int n1 = s1.length();
            int n2 = s2.length();
            if(n1>n2) return false;
            vector<int> freq(256,0);
            for(char x : s1){
                freq[x]++;
            }
            for(int i = 0; i<n1; i++){
                freq[s2[i]]--;
            }
            if(check(freq)) return true;
            for(int i = n1; i<n2; i++){
                freq[s2[i]]--;
                freq[s2[i-n1]]++;
                if(check(freq)) return true;
            }
            return false;
        }
    };
