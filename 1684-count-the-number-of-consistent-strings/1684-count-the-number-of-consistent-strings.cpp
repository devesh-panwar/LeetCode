class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        

         unordered_set<char>al;
        for(auto x: allowed){
            al.insert(x);
        }
        int c=0;
        for(int i=0;i<words.size();i++){
            unordered_set<char>t;
            bool fl=true;
            for(int j=0;j<words[i].size();j++){
                if(al.find(words[i][j])==al.end()){
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
};