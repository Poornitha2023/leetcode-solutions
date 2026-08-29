class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int h=height.size()-1;
        int a=INT_MIN;
        int temp=0;
       
        
        while(l<h){
           if(height[l]<height[h]){
            
           int mini=min(height[l],height[h]);
          
           
           temp=max(temp,mini*abs(l-h));
               l++;
           }else if(height[l]>height[h]){
             
              int p=min(height[l],height[h]);
           
              temp=max(temp,p*abs(l-h));
              h--;
           }else if(height[l]==height[h]){
             int pp=min(height[l],height[h]);
             temp=max(temp,pp*abs(l-h));
              l++;
             h--;
        }
        }
        
        return temp;
        
    }
};