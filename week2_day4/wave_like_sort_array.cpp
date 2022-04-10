#include <iostream>

int main() {
  int s;
  std::cin>>s;
  int arr[s];
  for(int i=0;i<s;i++){
    std::cin>>arr[i];
    }
  int temp;
  for(int i=0;i<s-1;i=i+2){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
  }
  for(int i=0;i<s;i++){
    std::cout<<arr[i];
  }
}