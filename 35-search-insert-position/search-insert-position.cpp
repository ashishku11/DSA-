class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        //int mid =0;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target) lo = mid+1;
            if(nums[mid]>target) hi = mid-1;
        }
        for(int i=0;i<n;i++){
            if(nums[i]>target){
                return i;
            }
        }
        return n;
        
    }
};