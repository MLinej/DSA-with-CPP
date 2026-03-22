// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
            if(mp[it]>nums.size()/2) return it;
        }
        return 0;
    }
};

// Example 1:

// Input: nums = [3,2,3]
// Output: 3