 int maxi=0;
      int count=0;
      
      for(int i=0;i<n-1;i++){
          if(arr[i]<arr[i+1])
            count++;
            else{
              maxi=max(count,maxi);
              count=0;
            }
       }
      maxi=max(count,maxi);
      return maxi;
      