class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int lo=0;
        int hi=nums.size()-1;
        int first = -1;
        int last = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target){
                first = mid;
                hi = mid-1;
            }
            else if(nums[mid]<target) lo = mid+1;
            else hi = mid-1;
        }
        lo=0;
        hi=nums.size()-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target){
                last = mid;
                lo = mid+1;
            }
            else if(nums[mid]<target) lo = mid+1;
            else hi = mid-1;
        }
        vector<int> a;
        if(first == -1) return a;
        for(int i = first; i<=last;i++){
            a.push_back(i);
        }

        return a;
    }
};