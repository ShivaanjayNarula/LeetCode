class ProductOfNumbers {
public:
    vector<int> nums = {1};
    ProductOfNumbers() {
       
    }
    
    void add(int num) {
        if(num)
        {
            nums.push_back(nums.back() * num);
        }
        else
        {
            nums = {1};
        }
    }
    
    int getProduct(int k) {
        int n = nums.size();
        if(k < n)
        {
            return nums.back() / nums[n-k-1];
        }
        return 0;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
