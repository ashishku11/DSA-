class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i=0;
        int res = -1;

        while(i<nums.size()){
            int largest = *std::max_element(nums.begin(), nums.begin() + i + 1);
            int smallest = *std::min_element(nums.begin() + i, nums.end());
            int diff = largest - smallest;
            if(diff<=k){
                res = i;
                break;
            }
            i++;     
        }
        return res;
    }
};