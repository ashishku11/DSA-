class Solution {
public:
    int myAtoi(string input) {
        const long long INT_MAX_VALUE = 2147483647LL;
        const long long INT_MIN_VALUE = -2147483648LL;

        int i = 0;
        int length = static_cast<int>(input.size());
        int sign = 1;
        long long nums = 0;
        while(i<length && input[i] == ' '){
            i++;
        }
        if(i<length && (input[i] == '+' || input[i] == '-')){
            if(input[i] == '-'){
                sign = -1;
            }
            i++;
        }
        while(i<length && input[i]>='0' && input[i]<='9'){
            nums = nums*10+(input[i]-'0');
            long long signedValue = nums * sign;
 
            if (signedValue > INT_MAX_VALUE) {
                return static_cast<int>(INT_MAX_VALUE);
            }
            if (signedValue < INT_MIN_VALUE) {
                return static_cast<int>(INT_MIN_VALUE);
            }
            i++;

        }
        return static_cast<int>(nums * sign);

    }
};
