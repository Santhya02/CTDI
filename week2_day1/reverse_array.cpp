#include <iostream>
int main() {
  int k=0;
  int s;
  int b[s];
  std::cin>>s;
  int arr[s];
  for(int i=0;i<s;i++){
    std::cin>>arr[i];
    }
  for(int i=s-1;i>=0;i--){
    b[k]=arr[i];
    std::cout <<b[k]<<" ";
    k++;
  }
  } 