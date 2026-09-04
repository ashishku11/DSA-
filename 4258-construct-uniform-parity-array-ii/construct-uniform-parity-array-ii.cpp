class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       // vector<int> nums2(nums1.size());
        int i = 0;
        int j = 1;
        while(j<nums1.size()){
            if(nums1[j]<nums1[i]){
                i=j;
            }
            j++;
        }
        if(nums1[i]%2!=0){
            return true;
        }
        j=0;
        while(j<nums1.size()){
            if(nums1[j]%2 !=0){ return false;}
            j++;
        }
        return true;
    }
};