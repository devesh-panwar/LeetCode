class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
        int t=0,f=0,i=0,j=0,chng=0,ans=0;

         
        while(j<n){

            if(answerKey[j]=='T') chng++;

            while(chng>k) {
                if(answerKey[i]=='T'){
                    chng--;
                }
                i++;
                
            }
            if(chng<=k)
            ans=max(ans,j-i+1);
            j++;
        }
        i=0,j=0,chng=0;
        int ans2=0;
        while(j<n){

            if(answerKey[j]=='F') chng++;

            while(chng>k) {
                if(answerKey[i]=='F'){
                    chng--;
                }
                i++;
                
            }
            if(chng<=k)
            ans2=max(ans2,j-i+1);
            j++;
        }


        return max(ans,ans2);
    //     int n=answerKey.size(),tk=k,t=0,f=0,c=0,ans=0;      
    //     for(auto x:answerKey){
    //         if(x=='T') t++;
    //         else f++;
    //     }
    //     char mx='F';
    //     if(t!=f)
    //         mx= (t==max(t,f))?'T':'F';      
    //     for(int i=0;i<n;i++){
    //         tk=k;
    //         string temp=answerKey;
    //         c=0;
    //         for(int j=i;j<n && tk>0;j++){
    //             if(answerKey[j]!=mx) {
    //                 tk--;
    //                 temp[j]=mx;
    //             }
    //         }
    //     for(int j=i;j<n;j++){
    //         if(temp[j]==mx) {
    //             c++; 
    //             ans=std::max(c,ans);
    //             }
    //         else c=0;            
    //     }
    // }
    //     return ans;
    }
};