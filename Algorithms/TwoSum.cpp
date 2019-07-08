//
// Created by Wang, Miao on 2019-07-08.
//
#include <vector>
using namespace std;

class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        vector<pair<int,int>> temp;

        for(int i = 0; i < nums.size(); i++) {
            pair<int, int> item(nums[i], i);
            temp.push_back(item);
        }

        sort(temp.begin(), temp.end());

        int i = 0, j = nums.size() - 1;

        while (i < nums.size() && i < j) {
            if (temp[i].first + temp[j].first == target) {
                vector<int> t{temp[i].second, temp[j].second};
                return t;
            }

            if (temp[i].first + temp[j].first < target) {
                i++;
            } else {
                j--;
            }
        }

        return result;
    }
};