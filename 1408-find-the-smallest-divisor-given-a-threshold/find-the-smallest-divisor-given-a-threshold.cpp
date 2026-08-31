class Solution {
public:
    bool divisor(vector<int> &nums,int threshold,int mid){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum + ceil((double)nums[i]/mid);
        }
        // if(sum<=threshold){
        //     return true;
        // }
        // return false; 
        return sum <= threshold;

    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        sort(nums.begin(),nums.end());
        int high = nums[nums.size()-1];
        //int ans = high;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(divisor(nums,threshold,mid)){
                //ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return low;
        
    }
};