class Solution {
public:
    int minMaxDifference(int num) {
        string temp1=to_string(num),temp2=temp1;
       
        char change='-';
        for(int i=0;i<temp1.length();i++){
            if(temp1[i]!='9' && change=='-'){
                change=temp1[i];
                temp1[i]='9';
            }else if(temp1[i]==change){
                temp1[i]='9';
            }
        }
         num=stoi(temp1);
        change='-';
   
        for(int i=0;i<temp2.length();i++){
            
            if(temp2[i]!='0' && change=='-'){
               
                     change=temp2[i];
               
                     temp2[i]='0';
       
            }else if(temp2[i]==change){
                temp2[i]='0';
            }
          
        }
        
        int num2=stoi(temp2);
        cout<<num2<<endl;
        return num-num2;
       
   
    }
};
