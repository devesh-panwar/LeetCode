class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        
        Map<Integer,String>mp=new TreeMap<>(Collections.reverseOrder());
        int n=names.length,j=0;
        for(int i=0;i<n;i++){
            mp.put(heights[i],names[i]);
        }

        String []st=new String[mp.size()];


        for (String x:mp.values()){
            st[j++]=x;
        }
        return st;
    }
}