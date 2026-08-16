class Solution {
public:
    int maxPower(string s) {
        int cnt=0;//1
        int maxi=0;//1
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                cnt++;
            }else{
                cnt=0;
            }
            if(cnt>maxi){
                maxi=cnt;
            }
        }
        return maxi+1;



    }
};