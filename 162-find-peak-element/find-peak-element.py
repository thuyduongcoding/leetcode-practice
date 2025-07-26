class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return 0

        left, right = 0, len(nums) - 1

        while (left <= right):
            mid = (right - left)//2 + left
            if mid < len(nums) -1 and nums[mid+1] > nums[mid]:
                left = mid + 1
            elif mid > 0 and nums[mid-1] > nums[mid]:
                right = mid - 1
            else:
                return mid
        