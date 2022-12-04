class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence[0]!=sentence[sentence.length()-1]) return false;
        char temp=sentence[0];
        for(int i=0;i<sentence.length();i++){
            if(i>0 && sentence[i]!=' ' && sentence[i-1]==' '){
                if(temp!=sentence[i]) return false;
            }else{
                if(sentence[i]!=' ') 
                    temp=sentence[i];
            }
        }
        return true;
    }
};
