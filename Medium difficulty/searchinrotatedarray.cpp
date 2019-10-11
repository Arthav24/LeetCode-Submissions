int search(vector<int>& nums, int target) {
        vector<int> ori(nums);
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums.at(mid)==target) return (find(ori.begin(),ori.end(),nums.at(mid))-ori.begin());
            else if(nums.at(mid)<target) left=mid+1;
            else right=mid-1;
        }   
        return -1;
}