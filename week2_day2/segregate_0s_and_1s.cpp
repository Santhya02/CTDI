class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                c++;
            }
            }
            for(int i=0;i<c;i++){
                arr[i]=0;
            }
            for(int i=c;i<n;i++){
                arr[i]=1;
            }
        }
};