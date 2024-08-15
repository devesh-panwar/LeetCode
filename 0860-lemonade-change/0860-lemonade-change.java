class Solution {
    public boolean lemonadeChange(int[] bills) {
        

        int mp[]=new int[3];
        for(int i=0;i<bills.length;i++){
            boolean f=false;
            if(bills[i]==5){
                f=true;
                mp[0]++;
            }else if(bills[i]==10){
                
                mp[1]++;
                if(mp[0]>0){
                    mp[0]--;
                    f=true;
                } 
            }else{
                
                mp[2]++;
                if(mp[1]>0 && mp[0]>0){
                    mp[1]--;
                    mp[0]--;
                    f=true;
                }else if(mp[0]>2){
                    f=true;
                    mp[0]-=3;
                }
            }

            if(!f){
                return false;
            }
        }

        return true;
    }
}