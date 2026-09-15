class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string st = "";
        for(char c : s){
            if(isalnum(c)) st += tolower(c);
        }
        
        int l = 0, r = st.size() - 1;
        while(l < r){
            if(st[l] != st[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
