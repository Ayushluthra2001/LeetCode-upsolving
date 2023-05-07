class FrequencyTracker {
public:
    FrequencyTracker() {
        
    }
    int count=0;
    unordered_map<int,int>mapping;
    unordered_map<int,int>mapping2;
    void add(int number) {
        int f=mapping[number];
        mapping[number]++;
        int newf=f+1;
        mapping2[newf]++;
        mapping2[f]--;
        cout<<count<<" "<<number<<" ";
        cout<<mapping2[f]<<" ";
        if(mapping2[f]<0) mapping2[f]=0;
        cout<<mapping2[f]<<" "<<mapping2[newf]<<endl;
        count++;
        
        
    }
    
    void deleteOne(int number) {
        int f=mapping[number];
        mapping[number]--;
        mapping2[f]--;
        if(f-1!=0)
        mapping2[f-1]++;
        if(mapping2[f]<0) mapping2[f]=0;
        if(mapping[number]<0) mapping[number]=0;
    }
    
    bool hasFrequency(int frequency) {
        if(mapping2[frequency]>=1)return true;
        return false;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */
