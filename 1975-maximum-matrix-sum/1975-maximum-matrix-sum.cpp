class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size(),mn=INT_MAX,neg=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0) neg++;
                mn=min(mn,abs(matrix[i][j]));
            }
        }

        return neg%2==0?sum:sum-2*mn;
    }
};