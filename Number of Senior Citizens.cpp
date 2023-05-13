class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto i : details){
            string temp="";
            temp+=i[i.size()-4];
            temp+=i[i.size()-3];    
            int a=stoi(temp);
            
            if(a>60) count++;

        }
        return count;
        
        
    }
};
