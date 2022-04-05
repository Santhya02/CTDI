#include <iostream>
int main() {
  int s;
  std::cin>>s;
  int arr[s];
  for(int i=0;i<s;i++){
    std::cin>>arr[i];
    }
  int max=arr[0];
  int min=arr[0];
  for(int i=1;i<s;i++){
    if(max<arr[i]){
      max=arr[i];
    }
    else if(min>arr[i]){
      min=arr[i];
      }
    }
  std::cout<<"min="<<min<<"\n";
  std::cout<<"max="<<max<<"\n";
  }