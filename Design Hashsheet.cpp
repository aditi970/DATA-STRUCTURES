class MyHashSet {
public:
    vector<vector<int>> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        vector<int> temp;
        temp.push_back(key);
        v.push_back(temp);
    }
    
    void remove(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i][0]==key){
                v[i][0]=-1;
            }
        }
    }
    
    bool contains(int key) {
        int a=0;
        for(int i=0;i<v.size();i++){
            if(v[i][0]==key){
               return true;
            }
    }
     return false;
    }
};
