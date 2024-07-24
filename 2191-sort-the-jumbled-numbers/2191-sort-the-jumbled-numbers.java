class Solution {
    public int[] sortJumbled(int[] mapping, int[] nums) {
        
        List<Integer>ls=new ArrayList<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            int num=nums[i];
            String num_str=Integer.toString(num);
            int el=0;
            while(num_str.length()>0){
               char ch =num_str.charAt(0);
              num_str= num_str.substring(1);
               el=el*10+mapping[ch-'0'];
            }
            ls.add(el);
        }

        Map<Integer,List<Integer>>mp=new TreeMap<>();

        for(int i=0;i<n;i++){
            int nm=ls.get(i);
            int mm=nums[i];
            if(!mp.containsKey(nm)){
                mp.put(nm,new ArrayList<>());
            }
            mp.get(nm).add(mm);
        }

        List<Integer>ans=new ArrayList<Integer>();
        
        for(Map.Entry<Integer,List<Integer>>it:mp.entrySet()){

            List<Integer>lss=it.getValue();
            while(!lss.isEmpty()){
                ans.add(lss.remove(0));
            }
        }

        int[] result = new int[ans.size()];
        for (int i = 0; i < ans.size(); i++) {
            result[i] = ans.get(i);
        }

        return result;
        



    }
}