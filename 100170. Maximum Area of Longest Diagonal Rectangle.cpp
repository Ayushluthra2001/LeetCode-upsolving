class Solution {
public:
    int a=0;
    int area=0;
    double sq=0; 
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        for(int i=0;i<dimensions.size();i++){
            double l=dimensions[i][0];
            double b=dimensions[i][1];
            double  mul=l*l+b*b;
            double h=sqrt(mul);
            
            if(h>=sq){
                if(h>sq){
                     sq=h;
                    a=(int)l*(int)b;
                    area=a;
                }else{
                    a=(int )l*int(b);
                    area=max(area,a);
                }
               
            }
            
        }
        return area;
        //return (int)dimensions[a][0]*(int)dimensions[a][1];
    }
};
