class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char,int>mapping;
        unordered_map<char,int>firstOcc;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i'){
                mapping[s[i]]++;
                if(firstOcc.find(s[i]) == firstOcc.end()) {
                    firstOcc[s[i]] = i;
                }

            }
        }
        vector<pair<char, pair<int,int>>> temp;
        for(auto i : mapping){
            char ch = i.first;
            int freq = i.second;
            int firstIndex = firstOcc[i.first];

            pair<int,int>x = {freq,firstIndex};
            temp.push_back({ch,x});
        }


       sort(temp.begin(), temp.end(),
    [](pair<char, pair<int,int>>& a,
       pair<char, pair<int,int>>& b) {

        if(a.second.first == b.second.first) {

            return a.second.second < b.second.second;
        }

        return a.second.first > b.second.first;
    });

    string vowel = "";
    for(auto i : temp){
        vowel+=i.first;
    }
    
    
    int i = 0;
    for(auto k : vowel){
        int freq = mapping[k];
        while(i < s.length() && freq > 0){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i'){
                s[i] = k;
                freq--;
            }
            i++;
        }
    }
    return s;
    }
};
