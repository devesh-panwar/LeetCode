class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        

         int [][]ans=new int[m][n];

        int m1=original.length;
        
        int k=0;
        if(m1==m*n){

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    ans[i][j]=original[k++];
                }
            }


        }
        else{
            return  new int[0][];
        }

        return ans;
    }
}