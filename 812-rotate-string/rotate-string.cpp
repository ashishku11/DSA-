class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        for(int i=0;i<s.size();i++){
            if( s == goal){
                return true;
            }
            char ch = s[n-1];
            s.pop_back();
            s = ch + s;
        }
        return false;
    }
};