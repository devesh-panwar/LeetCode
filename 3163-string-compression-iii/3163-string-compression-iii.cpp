class Solution {
public:
    string compressedString(string word) {        
        int n=word.size();
        int i=0;
       
        string ans="";
        while(i<n){

            char curr=word[i];
            int c=0;
            while(i<n && curr==word[i] && c<9){
                c++;
                
                i++;
                
            }
           
            ans+=to_string(c)+curr;
               
        }

        return ans;
    }
};