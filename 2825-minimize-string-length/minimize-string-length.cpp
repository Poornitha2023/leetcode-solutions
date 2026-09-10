class Solution {
public:
    int minimizedStringLength(string s1) {
        string s;
        sort(s1.begin(),s1.end());
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s1[i+1]){
                s.push_back(s1[i]);
            }
        }
        return s.size();
    }
};