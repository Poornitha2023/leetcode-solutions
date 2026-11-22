class Solution {
public:
int getnumofb(vector<int>&bloomDay,int mid,int k){
    int numofb=0;
    int cnt=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            cnt++;
        }else{
            cnt=0;
        }
        if(cnt==k){
            numofb++;
            cnt=0;
        }
    }
    return numofb;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int s=0,e=0;
        for(int day:bloomDay){
            e=max(e,day);
        }
        int minDays=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(getnumofb(bloomDay,mid,k)>=m){
                minDays=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }

        return minDays;
    }
};