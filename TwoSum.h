#ifndef TWOSUM_H
#define TWOSUM_H
#include "stable.h"


class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vi_result;
        vi_result.resize(2);
        for (auto iter = nums.begin(); iter != nums.end(); iter++) {
            int i_sub = target - *iter;
            vi_result[0] = distance(nums.begin(), iter);
            vector<int>::iterator it = find(nums.begin(), nums.end(), i_sub);
            if(it != nums.end() && it != nums.begin()) {
                vi_result[1] = distance(nums.begin(), it);
                break;
            }
        }
        return vi_result;
    }
};


#endif // TWOSUM_H
