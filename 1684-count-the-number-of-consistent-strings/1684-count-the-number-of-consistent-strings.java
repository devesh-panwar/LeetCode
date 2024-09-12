class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        
        HashSet<Character> al = new HashSet<>();
        
        for(char x: allowed.toCharArray()){
            al.add(x);
        }
        int c=0;
        for(int i=0;i<words.length;i++){
           // HashSet<Character>
            boolean fl=true;
            for(int j=0;j<words[i].length();j++){
                if(!al.contains(words[i].charAt(j))){
                    fl=false;
                    break;
                }
            }
            if(fl){
                c++;
            }
        }

        return c;

    }
}