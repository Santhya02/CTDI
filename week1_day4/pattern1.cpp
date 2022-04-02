#include <iostream>
int main() {
  int n=5;
  int k=1;
  for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++,k=k+2){
      std::cout<<k;
      std::cout<<" ";
    }
    std::cout<<"\n";
  }
}