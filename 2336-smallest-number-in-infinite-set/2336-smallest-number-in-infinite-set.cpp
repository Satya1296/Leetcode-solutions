class SmallestInfiniteSet {
public:
    int l;
    set<int>s;
    SmallestInfiniteSet() {
        l=1;
    }
    
    int popSmallest() {
        if(!s.empty()){
            int x=*s.begin();
            s.erase(s.begin());
            return x;
        }
        return l++;
    }
    
    void addBack(int num) {
        if(num<l){
            s.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */