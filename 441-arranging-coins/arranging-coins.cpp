class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return n;
        int i=0;
        int j=n-1;
        while(i<=j){
            long long mid = i+(j-i)/2;
            long long coin = mid*(mid+1)/2;
            if(coin<=n) i=mid+1;
            else j=mid-1;
        }
        return j;

    }
};