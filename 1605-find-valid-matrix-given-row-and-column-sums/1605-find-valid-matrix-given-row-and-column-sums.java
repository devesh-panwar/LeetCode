class Solution {
    public int[][] restoreMatrix(int[] rowSum, int[] colSum) {
        
         int n = rowSum.length;
        int m = colSum.length;
        int[][] ans = new int[n][m];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int mn = Math.min(rowSum[i], colSum[j]);
                ans[i][j] = mn;
                rowSum[i] -= mn;
                colSum[j] -= mn;
            }
        }
        
        return ans;
    }
}