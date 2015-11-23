/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.*/
void moveZeroes(int* nums, int numsSize) {
	int i, j;
	for (i = numsSize - 1; i >= 0; i--) {
		if (nums[i] != 0) continue;
		for (j = i + 1; j <= numsSize - 1; j++) {
			if (nums[j] == 0) break;
			nums[j - 1] = nums[j];
		}
		nums[j - 1] = 0;
	}
}