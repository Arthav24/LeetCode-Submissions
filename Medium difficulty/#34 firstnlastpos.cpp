int extremeInsertionIndex(vector<int> nums, int target, bool l) {
        int left = 0;
        int right = nums.size();

         while (left < right) {
            int mid = left+(right-left) / 2;
            if (nums[mid] > target || (l && target == nums[mid])) {
             right = mid;
            }
            else {
                left = mid+1;
            }
        }

        return left;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> r = {-1, -1};

        int leftIdx = extremeInsertionIndex(nums, target, true);
        if (leftIdx == nums.size() || nums[leftIdx] != target) {
            return r;
        }

        r[0] = leftIdx;
        r[1] = extremeInsertionIndex(nums, target, false)-1;

        return r;
    }