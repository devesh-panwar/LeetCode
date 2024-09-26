class MyCalendar {
public:
 unordered_map<int,int>mp;
    MyCalendar() {
        
       
    }
    
    bool book(int start, int end) {
        
        bool in=false;
        for(unordered_map<int,int>::iterator it=mp.begin();it!=mp.end();it++){

            if(it->first < end && it->second >start){
                return false;
            }
            
        }
        //mp[start]=end;
        mp.insert({start,end});

        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */