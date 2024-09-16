class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        vector<int > mn;
        for(auto x:timePoints){

        int m= (x[0]*10 +x[1])*60 + (x[3]*10+x[4]);
      //int m= stoi(mm);
       mn.push_back(m);
        }

        sort(mn.begin(),mn.end());
        int ans=INT_MAX;
        for(int i=1;i<mn.size();i++){
            ans=min(ans,mn[i]-mn[i-1]);
        }
    int n=mn.size();
        ans=min(ans,(1440+mn[0])-mn[n-1]);
        return abs(ans);
    }
};