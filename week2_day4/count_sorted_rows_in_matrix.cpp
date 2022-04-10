#include <iostream>

int main() {
  int rows;
std::cin>>rows;
int cols;
std::cin>>cols;
  int arr[rows][cols];
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
std::cin >> arr[i][j];
}
  }
  int ans=0;
        for(int i=0;i<rows;i++){
            int sorted= 0;
            for(int j=0;j<cols-1;j++){
                if(arr[i][j]>arr[i][j+1]){
                  sorted++;
                  }
                if(arr[i][j]<arr[i][j+1]){
                  sorted--;
            }
              }
            if(sorted==cols-1||sorted==1-cols){
              ans++;
              }
        }
        std::cout<<ans;
}