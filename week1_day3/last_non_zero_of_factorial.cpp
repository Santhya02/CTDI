int lastNon0Digit(int n)
{
    //code here
    int fact=1;
    for(int i=n;i>0;i--){
        fact=fact*i;
    }
    while(fact>0){
    if(fact%10==0){
        fact=fact/10;
    }
    else{
    int k=fact%10;
        return k;
}
}
}