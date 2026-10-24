class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return n;
        if(n==2 || n==3) return n-1;
        int i=0;
        int j=n;
        while(i<=j){
            long long mid = i+(j-i)/2;
            long long coin = mid*(mid+1)/2;
            if(coin<=n) i = mid+1;
            else j=mid-1;
        }
        return j;
    }
};