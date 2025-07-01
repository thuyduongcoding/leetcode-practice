class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        index_list = []
        for i, num in enumerate(nums):
            index_list.append((i, num))

        index_list.sort(key=lambda x:x[1])

        front = 0
        last = len(nums) - 1

        while (front < last):
            sum = index_list[front][1] + index_list[last][1] 
            if sum == target:
                return [index_list[front][0], index_list[last][0]]
            elif sum < target:
                front+=1
            else:
                last-=1 
