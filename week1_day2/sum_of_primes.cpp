class Solution{
public:
int flag=1;
int sum=0;
    int primeSum(int n){
        // code here
        while(n>0){
            flag=1;
        int m=n%10;
        if(m==1){
            flag=0;
        }
        else if(m==2){
            flag=1;
        }
        else{
        for(int i=2;i<m;i++){
            if(m%i==0){
                flag=0;
                break;
            }
        }
        }
            if(flag==1){
                sum=sum+m;
                
            
        }
        n=n/10;
        
        }
        return sum;
    }
};