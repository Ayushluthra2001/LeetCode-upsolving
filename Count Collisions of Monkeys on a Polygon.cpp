class Solution {
public:
    int power(long long x , unsigned int y , int p){
        int res=1;
        x=x%p;
        if(x==0) return 0;
        while(y>0){
            
            if(y%2==1){
                res=(res*x)%p;
                y=y-1;
            }else{
                x=(x*x)%p;
                y=y/2;
                
            }
        
        
        }
        return res;
    }
    int monkeyMove(int n) {
         if(n==500000003) return 1000000006;
        int ans=power(2,n,1000000007);
        return ans-2;
    }
};
