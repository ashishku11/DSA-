class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // for(int i=0;i<nums.size()-1;i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]+nums[j]==target){
    //             cout<<"("<<i<<","<<j<<")"<<endl;
    //             return{i,j};
    //         }
    //    }  
    // }
    // return{};
    int i =0;
    int j= i+1;
    while(i<nums.size()-1){
        int j = i+1;
        while(j<nums.size()){
            if(nums[i] + nums[j] == target){
                //cout<<"("<<i<<","<<j<<")"<<endl;
                return {i,j};
            }
            j++;
        }
        i++;
    }
    return {};
}
};