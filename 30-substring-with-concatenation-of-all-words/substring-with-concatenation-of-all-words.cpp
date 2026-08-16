class Solution {
public:

  bool checkSubstring(unordered_map<string,int>wordCount,string s,int wordlen){
     for(int j=0;j<s.size();j+=wordlen){
        string w=s.substr(j,wordlen);
        if(wordCount.find(w)!=wordCount.end()){
            if(--wordCount[w]==-1){
                return false;
            }
        }else{
            return false;
        }
     }
     return true;
  }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>bh;
        int wordlen=words[0].size();
        int slen=s.size();
        int wordw=words.size()*wordlen;
        unordered_map<string,int>wordCount;
        for(int i=0;i<words.size();i++){
            wordCount[words[i]]++;
        }
        int i=0;
        while(i+wordw<=slen){
            if(checkSubstring(wordCount,s.substr(i,wordw),wordlen)){
                bh.push_back(i);
            }i++;
        }
        return bh;
    }
};