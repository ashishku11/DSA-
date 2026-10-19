class Solution {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x;
        //int mid =0;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            long long m = (long long) (mid);
            long long y = (long long) (x);
            if(m*m==y) return m;
            if(m*m<y) lo = m+1;
            if(m*m>y) hi = m-1; 
        }
        return hi;
        
    }
};