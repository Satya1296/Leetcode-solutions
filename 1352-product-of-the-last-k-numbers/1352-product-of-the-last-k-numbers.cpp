class ProductOfNumbers {
public:
vector<int>a;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        a.push_back(num);
    }
    
    int getProduct(int k) {
        int last=a.size()-1;
        int p=1;
        while(k>0){
            p*=a[last];
            last--;
            k--;
        }
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */