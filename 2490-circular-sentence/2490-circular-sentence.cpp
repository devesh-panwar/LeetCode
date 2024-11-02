class Solution {
public:
    bool isCircularSentence(string sentence) {
        
        int n=sentence.size();
        char prev=' ';
        if(sentence[n-1]!=sentence[0]) return false;

        for(int i=0;i<n;i++){

            if(sentence[i]==' '){
                if(prev!=sentence[i+1]) return false;
            }
            else{
                prev=sentence[i];
            }
        }
        return true;
    }
};