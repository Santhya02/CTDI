void rotateArr(int arr[], int d, int n){
    // code here
    for(int i=0;i<d;i++){
        int temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
}