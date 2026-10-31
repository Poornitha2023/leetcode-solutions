class Solution {
public:
    string customSortString(string order, string si) {
        map<char,int>mp;
        for(auto it:si){
            mp[it]++;
        }
        string s="";
        for(auto it:order){
            while(mp[it]>0){
                s+=it;
                mp[it]--;
            }
        }
        for(auto it:si){
            if(mp[it]>0){
              
                s+=it;
                  mp[it]--;
            }
        }
        return s;
    }
};