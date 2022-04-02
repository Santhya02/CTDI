#include<iostream>
int productOfPrimeFactors(int n){
  int prod=1;
  for(int i=2;i<=n;i++){
    if(n%i==0){
      int c=0;
      for(int j=2;j<=i/2;i++){
        if(i%j==0){
          c++;
          break;
        }
      }
    if(c==0){
      prod=prod*i;
    }
      }
  }
  return prod;
}
int main() {
  std::cout <<productOfPrimeFactors(24);
}