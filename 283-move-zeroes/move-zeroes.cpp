class Solution {
public:
    void moveZeroes(vector<int>& nums) {
                for(int i=0;i<nums.size()-1;i++){
            bool flag = true;
            for(int j=0;j<nums.size()-1-i;j++){
                if(nums[j] == 0){
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