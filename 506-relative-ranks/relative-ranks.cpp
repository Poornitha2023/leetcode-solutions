class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
          vector<int>arr=score;
        sort(arr.begin(),arr.end());
        int k=arr[arr.size()-1];
        int b=-1;
        int c=-1;
        if(arr.size()>=2){
            b=arr[arr.size()-2];
        }
         if(arr.size()>=3){
            c=arr[arr.size()-3];
        }
        // score[score.size()-1]="Gold Medal";
        // score[score.size()-2]="Silver Medal";
        // score[score.size()-3]="Bronze Medal";
        vector<string>a;
        for(int i=0;i<score.size();i++){
            if(score[i]==k){
                a.push_back("Gold Medal");
            }else if(score[i]==b){
                a.push_back("Silver Medal");
            }else if(score[i]==c){
                a.push_back("Bronze Medal");
            }else{
               for(int j=0;j<arr.size();j++){
                if(score[i]==arr[j]){
                    a.push_back(to_string(arr.size()-j));
                    break;
                }
               }
            }
        }

         return a;

    }
};