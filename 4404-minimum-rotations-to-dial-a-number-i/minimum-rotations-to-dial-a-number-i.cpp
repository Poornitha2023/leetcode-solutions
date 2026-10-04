class Solution {
public:
    int minRotations(string s) {
        int su=0;
        int p=0;
        for(int i=0;i<s.size();i++){
            char c=s[i]-'0';
            su+=min(abs(c-p),10-abs(c-p));
            p=c;
        }
        return su;
    }
};