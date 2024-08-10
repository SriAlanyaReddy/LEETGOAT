class Solution {
    public int pivotIndex(int[] nums) {
        int n = nums.length;

        // Loop through each index to check for pivot
        for (int i = 0; i < n; i++) {
            int leftSum = 0;
            int rightSum = 0;

            // Calculate left sum for index i
            for (int j = 0; j < i; j++) {
                leftSum += nums[j];
            }

            // Calculate right sum for index i
            for (int j = i + 1; j < n; j++) {
                rightSum += nums[j];
            }

            // Check if left sum equals right sum
            if (leftSum == rightSum) {
                return i;
            }
        }

        // Return -1 if no pivot index is found
        return -1;
    }
}
