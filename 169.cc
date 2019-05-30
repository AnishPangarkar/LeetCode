class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int toReturn = 0;
        int majorityCount = nums.size()/2;
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>::const_iterator got = map.find (nums[i]);
            if(got == map.end()){
                map[nums[i]] = 1;
            }
            else map[nums[i]]+=1;
            if(map[nums[i]] > majorityCount) toReturn = nums[i];
        }
        return toReturn;
    }
};