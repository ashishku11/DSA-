class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
            int k=nums.size();
            int i=0,j=0 ;
            vector<int>f ;
            vector<int>d ;
            for(int i=n;i<k;i++){
                f.push_back(nums[i]) ;
            }
            while(i<k && j<f.size()){
                d.push_back(nums[i]) ;
                i++ ;
                d.push_back(f[j]);
                j++ ;
            }

            return d ;
    }
};