class MyHashSet {
public:
    vector<int> hashmap;
    int mod;
    MyHashSet() {
        hashmap.resize(1000001,-1);
        mod = 1000000;
    }
    
    void add(int key) {
        hashmap[key%mod] = 1;
    }
    
    void remove(int key) {
        hashmap[key%mod] = -1;
    }
    
    bool contains(int key) {
        return hashmap[key%mod] == 1 ? 1 : 0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */