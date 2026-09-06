class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>bh;
        for(int i=0;i<s.size();i++){
            bh[s[i]]++;
        }
        bool odd=false;
        int res=0;
        for(auto &n:bh){
            if(n.second%2==0){
                res+=n.second;
            }else{
                res+=n.second-1;
                odd=true;
            }
        }
        if(odd) return res+1;
        else return res;
    }
};