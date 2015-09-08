class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> tmpMap;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(tmpMap.find(nums[i]) == tmpMap.end())
                tmpMap[target - nums[i]] = i;
            else{
                result.push_back(tmpMap[nums[i]] + 1);
                result.push_back(i + 1);
                break;
            }
        }
        return result;
    }
};
