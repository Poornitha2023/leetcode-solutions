class Solution {
public:
    int calPoints(vector<string>& operations) {
     int st[1001];
    int sum=0;
    int top=-1;
    for(int i=0;i<operations.size();i++){
          if(operations[i][0] =='D'){
           int d = st[top] * 2;
          st[++top]=d;

        }else if(operations[i][0]=='C'){
            
            top--; //pop
            
        }
        else if(operations[i][0] == '+'){
            int a=st[top]+st[top-1];
         st[++top]=a;
        } else { st[++top] = stoi(operations[i]); }//push
    } 
     for(int i=0;i<=top;i++){
        sum+=st[i];
       
    }
    return sum;
    }
};