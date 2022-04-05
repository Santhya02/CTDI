#include <iostream>

int main() {
  int s;
  std::cin>>s;
  int arr[s];
  for(int i=0;i<s;i++){
    std::cin>>arr[i];
    }
  for(int i=0;i<s;i++){
    if(!((arr[i]+1)==arr[i+1])){
      std::cout<<arr[i]+1;
      break;
    }
  }
}