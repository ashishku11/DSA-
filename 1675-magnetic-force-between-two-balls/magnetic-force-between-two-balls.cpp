class Solution {
public:
    bool CanBeplacedBall(vector<int>& position,int mid,int m){
        int ball = 1;
        int pos = position[0];
        for(int i=1;i<position.size();i++){
            if(position[i] - pos >= mid){
                ball++;
                pos = position[i];
            }
            if(ball>=m){
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        
        int low = 1;
        sort(position.begin(),position.end());
        int ans = 0;
        int high = position[position.size()-1] - position[0];
        while(low<=high){
            int mid = low + (high-low)/2;

            if(CanBeplacedBall(position,mid,m)){
                ans = mid;
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return ans;    
    }
};