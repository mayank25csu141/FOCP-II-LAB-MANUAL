class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int i,j;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if( i!=j && nums[i]+nums[j]==target){
                    return {i,j};
                }
            } 
        }
        return {};
    }     
    };