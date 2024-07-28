
class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int maxi = sqrt(r);
        vector<int>sieve(maxi+1,1);
        sieve[1] = 0;
        
        for(int i=2;i<=maxi;i++){
            if(sieve[i]==1){
                
                for(int j =i*i;j<=maxi;j+=i){
                sieve[j] = 0;
                }    
            }
            
        }
      
        int count =0;
        for(int i=2;i<=maxi;i++){
            if(sieve[i]==1){
                 int no = i * i;
                 if(no>=l && no<=r){
                  count++;
                }
            }
        }
        
     
       
        
        return (r-l + 1) - count;
    }
};
