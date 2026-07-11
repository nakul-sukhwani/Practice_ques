class Solution {
public:
    bool isPalinArray(vector<int> &arr) {
        for (int num : arr) {
            int original = num;
            int reversed = 0;
            while (num > 0) {
                int lastDigit = num % 10;
                reversed = reversed * 10 + lastDigit;
                num /= 10;
            }
            
            if (original != reversed) {
                return false;
            }
        }
        return true;
    }
};