int hasThreePrimeFac(long long N) {
        // code here
        int c=0;
        for(int i=2;i<N;i++){
            if(N%i==0){
                c++;
            }
        }
        if(c==1){
            return 1;
        }
        else{
            return 0;
        }
    }