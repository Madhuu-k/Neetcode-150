// Time Complexity: O(n)

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for(int i = 0; i < 32; i++){
            int lastBit = n & 1; // Get the last Bit
            res = (res << 1) | lastBit;
            n >>= 1; // Divides -> n / 2
        }
        return res;
    }
};