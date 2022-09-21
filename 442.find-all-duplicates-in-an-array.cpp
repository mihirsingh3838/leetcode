/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int>v;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==nums[i+1])
            {
                v.push_back(nums[i]);
                i++;
            }
        }
        return v;
    }
};
// @lc code=end

