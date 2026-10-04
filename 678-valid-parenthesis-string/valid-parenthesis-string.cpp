class Solution {
public:
    bool checkValidString(string s) {
        int l=0,h=0;
       for (char c:s){
        if(c=='('){
            l++;
            h++;
        }
        else if(c==')'){
             l--;
            h--;
        } else if(c=='*'){
             l--;
            h++;
        }
        if(l<0){
            l=0;
        }
        if(h<0){
            return false;
        }
       }
       if(l==0){
        return true;
       }
       return false;
    }
};