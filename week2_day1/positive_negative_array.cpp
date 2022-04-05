#include <iostream>

int main() {
  int s;
  std::cin>>s;
  int arr[s];
  for(int i=0;i<s;i++){
    std::cin>>arr[i];
    }
  int k=0;
  int b[s];
  for(int i=0;i<s;i++){
    if(arr[i]<0){
      b[k]=arr[i];
      std::cout<<b[k]<<" ";
      k++;
    }
  }
  for(int i=0;i<s;i++){
    if(arr[i]>0){
      b[k]=arr[i];
      std::cout<<b[k]<<" ";
      k++;
    }
  }
  }