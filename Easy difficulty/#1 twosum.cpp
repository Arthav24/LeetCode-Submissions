class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector<int> r(nums);
        vector<int> temp(1);
        sort(nums.begin(),nums.end());
        int it=0,rit=nums.size()-1;
        while(it<rit){                     
            long diff=target-nums[it];
            if(diff==nums[rit]){  
                temp[0]=diff;
                 return r={find(r.begin(),r.end(),nums[it])-r.begin(),find_end(r.begin(),r.end(),temp.begin(),temp.end())-r.begin()};}
            if(diff>nums[rit])
                ++it;
            else
                --rit;
        }
        return r={0,0};
    }
};