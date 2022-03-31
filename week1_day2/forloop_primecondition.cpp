string isPrime(int n) {
    int flag=1;
    for (int i = 2; i <n; i++) {
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1&&n!=1){
        return "Yes";
    }
    else{
        return "No";
    }
}