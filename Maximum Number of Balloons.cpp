class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mapping;
        for(auto i : text) mapping[i]++;
        int maxi = INT_MAX; 
        bool b = false, a = false, l = false, o = false;
        for(auto i : mapping){
            if(i.first=='b') b= true;
            else if(i.first =='a') a = true;
            else if(i.first =='l') l = true;
            else if(i.first =='o') o =true;
            if(i.first=='b' || i.first=='a' || i.first=='n' ){
                maxi = min(maxi, i.second);
            }else if(i.first=='l' ||i.first=='o'){
                maxi = min(maxi , i.second/2);
            }
        }   
        if(a && b && l && o) 
        return maxi;

        return 0;
    }
};
