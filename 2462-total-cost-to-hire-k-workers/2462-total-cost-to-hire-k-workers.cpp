class Solution {
public:
    long long totalCost(std::vector<int>& costs, int k, int candidates) {

        //  int ans=0,n=min(k,candidates);

        // while(k-- && costs.size()>0){
            
        //     int mn=*std::min_element(costs.begin(),costs.end());
        //     ans+=mn;
        //     auto it= std::find(costs.begin(),costs.end(),mn);
        //     //if (it != costs.end())
        //      {
        // costs.erase(it);
        // }

        // }
        // return ans;

        if(costs.size()<=2 && k==1) return *min_element(costs.begin(),costs.end());

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> workers;
        int n = costs.size();
        int i = 0, j = n - 1;
        while(i < candidates and i < n) {
            workers.push({ costs[i], i });
            i++;
        }
        
        while(j > i and j >= n - candidates) {
            workers.push({ costs[j], j });
            j--;
        }
        
        long long cost = 0;
        while(k--) {
            auto [workerCost, index] = workers.top();
            workers.pop();
            cost += workerCost;
            if(j >= i) {
                if(index > j) {
                    workers.push({ costs[j], j });
                    j--;
                } else {
                    workers.push({ costs[i], i });
                    i++;
                }
            }
        }
        
        return cost;


       
    }
};