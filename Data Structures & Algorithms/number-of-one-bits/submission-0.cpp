class Solution {
public:
    int hammingWeight(uint32_t n) {

        int count = 0, res = n;

        while (res != 0){
            count ++;
            res = res & (res - 1);
        }
        return count;

    }
};
