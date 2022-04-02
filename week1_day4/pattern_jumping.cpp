class Solution {
  public:
    string canJump(long long N) {
        // code here
        if(N==1||N==2){
            return "True";
        }
        int s=1;
        int j=0;
        for(int i=0;i<=N/2;i++){
        
            j=s*2;
            s=j;
        
        if(j==N){
            return "True";
        }
        }
            return "False";
    }
};