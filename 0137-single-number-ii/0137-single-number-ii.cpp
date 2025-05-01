class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int i = 0; i < 32; i++) {  // Iterate over all 32 bits
            int sum = 0;
            for (int num : nums) {
                if (num & (1 << i)) { 
                    sum++;
                }
            }

            if (sum % 3 != 0) {  // If sum is not a multiple of 3, set this bit in the result
                result |= (1 << i);
            }
        }
        
        return result;
    }
};
