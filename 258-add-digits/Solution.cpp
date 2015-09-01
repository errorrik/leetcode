class Solution {
public:
    int addDigits(int num) {
        /*
        int result = 0;
        while (num >= 10) {
            result += num % 10;
            num /= 10;
        }
        result += num;

        if (result >= 10) {
            return addDigits(result);
        }

        return result;
        */
        
        int result = num % 9;
        if (result == 0 && num > 0) {
            return 9;
        }

        return result;
    }
};