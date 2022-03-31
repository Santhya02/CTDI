class Solution{
    public:
	int fullPrime(int N){
	    //code here
	    int c=0;
	    int d=0;
	    
	    for(int i=2;i<N;i++){
	        if(N%i==0){
	            c++;
	            break;
	        }
	    }
	    //for(int j=0;j<N;j++){
	    while(N>0){
	        int m=N%10;
	        if(N==1||m==1||m==0){
	            d++;
	           
	        }
	        for(int k=2;k<m;k++){
	        if(m%k==0){
	            d++;
	        }
            }
	    
	          N=N/10;
        }
	        
	if(c==0&&d==0){
	    return 1;
	}
	else{
	    return 0;
	}

	}
};