void isDivisibleByPrime(int n){
    
    // Your code here
    if(n%11==0){
        std::cout<<"Eleven";
        std::cout<<"\n";
    }
    else if(n%3==0){
        std::cout<<"Three";
        std::cout<<"\n";
    }
    else if(n%2==0){
        std::cout<<"Two";
        std::cout<<"\n";
    }
    else{
        std::cout<<"-1";
        std::cout<<"\n";
    }
    
    
}