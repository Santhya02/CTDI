int main() {
  int s;
  std::cin>>s;
  int arr[s];
  for(int i=0;i<s;i++){
    std::cin>>arr[i];
    }
 int k;
  std::cin>>k;
  int temp;
    for(int i=0;i<s-1;i++){
      for(int j=i+1;j<s;j++) {
        if(arr[i]>arr[j]) {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    std::cout<<arr[k-1];
  }
  