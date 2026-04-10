class Solution {
public:
    int partition(vector<int>& nums, int lb, int ub) {
        int pivot = nums[lb];
        int start = lb;
        int end = ub;

        while (start < end) {
            while (nums[start] <= pivot && start <= ub - 1) start++;
            while (nums[end] > pivot && end >= lb + 1) end--;

            if (start < end) {
                swap(nums[start], nums[end]);
            }
        }

        swap(nums[lb], nums[end]);
        return end;
    }

    void quickSortHelper(vector<int>& nums, int lb, int ub) {
        if (lb < ub) {
            int loc = partition(nums, lb, ub);
            quickSortHelper(nums, lb, loc - 1);
            quickSortHelper(nums, loc + 1, ub);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
        quickSortHelper(nums, 0, nums.size() - 1);
        return nums;
    }
};
