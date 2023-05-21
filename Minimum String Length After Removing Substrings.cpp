class Solution {
public:
    int minLength(string s) {
        int i=0;
        bool  check=true;
        while(check && !s.empty()){
            check=false;
            
            if(s.find("AB")!= std::string::npos){
                auto it = s.find("AB");
                // cout<<it<<endl;
                s.erase(s.begin()+it,s.begin()+it+2);
                // cout<<s<<endl;
                
                check=true;
                
            }else if(s.find("CD")!= std::string::npos){
               auto it = s.find("CD");
                // cout<<it<<endl;
                s.erase(s.begin()+it,s.begin()+it+2);
                 check=true;
            }
        }
        return s.length();
    }
};
