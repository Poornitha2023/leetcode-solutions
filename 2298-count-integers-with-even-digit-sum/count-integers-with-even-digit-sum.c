int countEven(int num) {
    int digit=0;
    int cnt=num;
    while(num!=0){
        digit=digit+num%10;
        num=num/10;
    }
        if(digit%2==0) return (cnt)/2;

     
      else  return (cnt-1)/2;

}