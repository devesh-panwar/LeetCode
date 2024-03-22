class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        while(columnTitle.size()>0){
            ans=ans*26+(columnTitle.front()-'@');
            columnTitle.erase(columnTitle.begin());


        }
    // ans+=columnTitle.front()-'@';
     return ans;

    }
};