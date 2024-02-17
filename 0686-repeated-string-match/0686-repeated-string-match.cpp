class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        
        int b_len=b.size();
        int a_len=a.size();
        
        int cnt =b_len/a_len;
        string st="";
        while(cnt--){
            st+=a;
        }

        if(st.find(b)!=string::npos){
            return b_len/a_len;
        }

        st+=a;
        if(st.find(b)!=string::npos){
                return (b_len/a_len)+1;
        }
         st+=a;
         if(st.find(b)!=string::npos){
              return (b_len/a_len)+2;
         }

         return -1;
    }
};