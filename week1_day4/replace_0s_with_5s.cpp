int convertFive(int n){
int m=n;
        for(int i=1;m>0;i=i*10){
            if(m%10==0){
                n=n+(5*i);
            }
            m=m/10;
        }
        return n;
    }