class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int i=0;
        int j= n-1;
        // char smallest = letters[0];
        //bool found = false;
        while(i<=j){
            int mid = i+(j-i)/2;
           if(letters[mid]<=target){
                i = mid+1;
            }
            else j=mid-1;
        }
        if(i==n) return letters[0];
        return letters[i];
    }
};