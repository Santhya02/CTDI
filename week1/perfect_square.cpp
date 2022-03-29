#include <iostream>

int main() {
  int n;
  int square;
  std::cin>>n;
  for(int i=0;i<=n;i++){
    square=i*i;
    if(square==n){
      std::cout<<"yes";
      return 0;
      }
    }
        std::cout<<"no";
  }