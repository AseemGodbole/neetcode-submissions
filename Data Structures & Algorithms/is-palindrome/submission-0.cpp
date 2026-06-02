class Solution {
public:
    string lowered(string s){
        int n = s.length();
        string ans="";
        for(int i = 0; i<n; i++){
            if(!(s[i]>='a'&& s[i]<='z')&& !(s[i]>='A'&& s[i]<='Z')&& !(s[i]>='0'&&s[i]<='9')) continue;
            else if((s[i]>='A'&& s[i]<='Z')) ans+= s[i]-'A'+'a';
            else ans+=s[i];
        }
        return ans;
    }
    bool isPalindrome(string s) {
        string p = lowered(s);
        int n = p.length();
        int l = 0;
        int r = n-1;
        while(l<r){
            if(p[l]!=p[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
