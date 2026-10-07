class Solution {
public:
    string rearrangeString(string s, char X, char Y) {
        string  y="";
        string o="";
        string x="";
        for(char c:s){
            if(c==X){
                x+=c;
            }else if(c==Y){
                y+=c;
            }else{
                o+=c;
            }
        }
        string a=y+x+o;
        return a;
    }
};