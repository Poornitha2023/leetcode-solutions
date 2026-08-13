class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,maxi=0,ans=0;
        unordered_map<char,int>bh;
        for(int right=0;right<s.size();right++){
                bh[s[right]]++;
            maxi=max(maxi,bh[s[right]]);
            while((right-left+1)-maxi>k){
                bh[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};