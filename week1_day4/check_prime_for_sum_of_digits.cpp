#include <iostream>
int prime_sum_of_digits(int n){
  int sum=0;
  int c=0;
   while(n>0||sum>9) {
      if(n==0) {
         n=sum;
         sum=0;
      }
      sum=sum+n%10;
      n=n/10;
   }
  for(int i=2;i<sum;i++){
    if(sum%i==0){
      c++;
    }
  }
  if(c==0){
    return 1;
  }
  else{
    return 0;
  }
  }
int main(){
  std::cout<<prime_sum_of_digits(92);
  
}