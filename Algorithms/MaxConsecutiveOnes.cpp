//
// Created by Wang, Miao on 2019-07-08.
//
#include <vector>;

using namespace std;

class MaxConsecutiveOnes {

public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, max_l = 0;
        while (i < nums.size()) {
            if (nums[i] == 1) {
                int current_len = 1, r = i + 1;
                while (r < nums.size() && nums[r] == 1) {
                    r++;
                    current_len++;
                }
                i = r;
                max_l = max(max_l, current_len);

            } else {
                i++;
            }
        }
        return max_l;
    }

};