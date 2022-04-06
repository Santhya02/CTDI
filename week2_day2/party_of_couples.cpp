class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        int temp=arr[0];
        for(int i=1;i<N;i++){
            temp=temp^arr[i];
        }
        return temp;
    }
};
