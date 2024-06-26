class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int left=0,right=letters.size()-1;
        int n=letters.size();
        while(left<=right){

            int mid=(left+right)/2;

            if(letters[mid]>target){
               
                right=mid-1;
            }
            else {
                 left=mid+1;
            }
        }

        return letters[left%n];

    }
};