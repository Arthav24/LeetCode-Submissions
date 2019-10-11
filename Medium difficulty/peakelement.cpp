 int findPeakElement(vector<int>& nums) {
     vector<int> ori(nums);
     if(nums.size() == 0)
    return -1;
    make_heap(nums.begin(),nums.end());
    return (find(ori.begin(),ori.end(),nums.front())-ori.begin());
    
  }