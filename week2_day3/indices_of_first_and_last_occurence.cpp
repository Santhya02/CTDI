#include <iostream>

int main() {
  int n;
  std::cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    std::cin>>arr[i];
    }
 int x;
  std::cin>>x;
  int last=0;
  for(int i=0;i<n;i++){
    if(arr[i]==x){
      std::cout<<i;
      for(int j=i+1;j<n;j++){
        if(arr[j]==x){
          last=j;
        }
    }break;
      }
    }
      std::cout<<last;
}