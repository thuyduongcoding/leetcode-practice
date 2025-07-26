class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return 0

        left, right = 0, len(nums) - 1

        while (left <= right):
            mid = (right - left)//2 + left
            print("left: {}, right: {}, mid: {}".format(left, right, mid))
            if nums[mid - 1] < nums[mid] and (mid + 1 >= len(nums)):
                return mid         
            if nums[mid+1] < nums[mid] and (mid - 1 < 0):
                return mid

            if nums[mid + 1] > nums[mid]:
                left = mid + 1
            elif nums[mid -1] > nums[mid]:
                right = mid - 1
            else:
                return mid
            
        