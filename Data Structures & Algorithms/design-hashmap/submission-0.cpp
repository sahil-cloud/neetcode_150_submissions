class MyHashMap {
public:
    vector<pair<int,int> > hashmap;
    int mod = 1000000;
    MyHashMap() {
        hashmap.resize(1000001,{-1,-1});
    }
    
    void put(int key, int value) {
        hashmap[key%mod] = {1,value};
    }
    
    int get(int key) {
        return hashmap[key%mod].second;
    }
    
    void remove(int key) {
        hashmap[key%mod] = {-1,-1};
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */