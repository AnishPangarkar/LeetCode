class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotated;
        for(int i=0;i<nums.size();i++) rotated.push_back(0);
        for(int i=0;i<nums.size();i++){
            rotated[(i+k) % nums.size()] = nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = rotated[i];
        }
    }
};