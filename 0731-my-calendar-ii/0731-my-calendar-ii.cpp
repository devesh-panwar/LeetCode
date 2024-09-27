class MyCalendarTwo {
public:
    map<int,int>mp;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        
        mp[start]++;
        mp[end]--;
        int c=0;

        for( map<int, int>::const_iterator it=mp.begin();it!=mp.end();it++){
           c+= it->second;

           if(c>2){
           // mp.erase(start);
           mp[start]--;
           mp[end]++;
            if(mp[start]==0) mp.erase(start);
            if(mp[end]==0) mp.erase(end);   
            //mp.erase(end);
            return false;
           }
        }

        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */