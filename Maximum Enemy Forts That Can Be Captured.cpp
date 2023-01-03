class Solution {
public:
    int captureForts(vector<int>& forts) {
        int maxi=0;
        int i=0;
        while(i<forts.size()){
            int count=0;           
            if(forts[i]==1){
               
                int j=i+1;
                while(j<forts.size() && forts[j]==0){
                   
                    count++,j++;
                }
                if(j!=forts.size() && forts[j]==-1)
                maxi=max(count,maxi);
                i=j;
            }
            else if(forts[i]==-1){
                int j=i+1;
                while(j<forts.size() && forts[j]==0){
                   
                    count++,j++;
                }
                if(j!=forts.size() && forts[j]==1)
                maxi=max(count,maxi);
                i=j;
            }
            else{
                i++;
            }
        }
        return maxi;
    }
};
