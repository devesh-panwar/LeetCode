class CustomStack {
public:int sz;
    stack<int>st;
    CustomStack(int maxSize) {
        sz=maxSize;
        
    }
    
    void push(int x) {
        if(st.size()<sz){
            st.push(x);
        }
    }
    
    int pop() {
        if(!st.empty()) {
            int ans=st.top();
            st.pop();
            return ans;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        stack<int>st2;
       // int btm_el=llabs(st.size()-k);
        vector<int>temp;
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
reverse(temp.begin(),temp.end());
       int lst = k<temp.size()?k:temp.size(); 
       for(int i=0;i<lst;i++){
           temp[i]+=val;
       }
       
       for(auto x:temp){

           st.push(x);
       }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */