class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {


        int n=spaces.size();

        if(n==0) return s;
        sort(spaces.begin(),spaces.end());

        int m=s.size();
        int c=n-1,j=n-1;
         s.resize(m + n);
        for(int i=m-1;i>=0;i--){
            s[i+j+1]=s[i];

            if( j>=0 && i==spaces[j]  ){
                s[i+j]=' ';
                j--;
                
            }
        }
        return s;

    }
};