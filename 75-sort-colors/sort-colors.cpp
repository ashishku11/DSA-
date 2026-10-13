class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int n = nums.size();
        // int lo = 0;
        // int mid = 0;
        // int hi = n-1;
        // while(mid<=hi){
        //     if(nums[mid]==2){
        //         int temp = nums[mid];
        //             nums[mid] = nums[hi];
        //             nums[hi] = temp;
        //             hi--;    
        //     }
        //    else if(nums[mid]==0){
        //         int temp = nums[mid];
        //         nums[mid] = nums[lo];
        //         nums[lo] = temp;
        //         lo++;
        //         mid++;    
        //    }
        //    else mid++;     
        // }
        // return; 

            for(int i=0;i<nums.size()-1;i++){
            bool flag = true;
            for(int j=0;j<nums.size()-1-i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    flag = false;
                }
                
            }
            if(flag == true){
                break;
            }
        }
        return ;
    }
};