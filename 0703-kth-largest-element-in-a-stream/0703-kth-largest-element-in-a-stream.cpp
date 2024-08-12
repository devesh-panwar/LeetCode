class KthLargest {
public:int k;
    priority_queue<int, std::vector<int>, std::greater<int>> n;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        
        for(auto k:nums){
            
                 n.push(k);
            
             if(this->k< n.size()){
                n.pop();
                
            }
           
        }
    }
    
    int add(int val) {
        if( n.size() < k){
            n.push(val);
        }else if(n.top()<val){
            n.pop();
            n.push(val);
        }
       return n.top();

        //return n.size()-(find(n.begin(),n.end(),val)-n.begin());

        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */