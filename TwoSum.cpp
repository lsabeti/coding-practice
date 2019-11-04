//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                sum = 0;
                if (nums[i] < target && nums[j] < target && i!=j){
                    sum = nums[i] + nums[j];
                    if (sum == target){
                        res.push_back(i);
                        res.push_back(j);
                        return res;
                    }
                }
            }
        }
    return res;        
    }
};
