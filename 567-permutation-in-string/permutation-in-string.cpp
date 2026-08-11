class Solution {
public:
    bool checkInclusion(string p, string s) {
        unordered_map<char,int>k;
       for(int i=0;i<p.size();i++){
               k[p[i]]++;
        }
       
       unordered_map<char,int>s1;
       int left=0;
       for(int i=0;i<s.size();i++){
        s1[s[i]]++;
       if(i>=p.size()-1){
        if(k==s1){
            return true;
        }
            s1[s[left]]--;;
        
        if(s1[s[left]]==0){
            s1.erase(s[left]);
        }
        left++;
       }
       }
       return false;
       
        
    }
};