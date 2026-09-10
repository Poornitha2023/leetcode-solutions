class Solution {
public:
    string removeStars(string s) {
        stack<int>star;
        int top=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                star.pop();
            }
            else{
                star.push(s[i]);
            }
        }
        string ans;
        while(!star.empty()){
            ans+=star.top();
            star.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};