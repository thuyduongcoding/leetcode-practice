class Solution:
    def twoSum(self, nums, target):
        i = 0
        j = len(nums) - 1
        sub_results = []
        while (i < j):
            total = nums[i] + nums[j]
            if total > target: 
                j-=1
            elif total < target: 
                i+=1
            else: 
                sub_results.append([nums[i], nums[j]])
                cur_i = nums[i]
                while i + 1 < len(nums) and nums[i+1] == cur_i:
                    i+=1
                cur_j = nums[j]
                while j - 1 > 0 and nums[j-1] == cur_j:
                    print(j)
                    j-=1
                i+=1
                j-=1
                            
        return sub_results

    def threeSum(self, nums: List[int]) -> List[List[int]]:
        # fix 
        # conduct two sum for left array
        results = []
        nums.sort()
        for i in range(len(nums) - 2):
            if i != 0 and nums[i] == nums[i-1]:
                continue
            x = nums[i]
            sub_results = self.twoSum(nums[i+1:], 0 - x)
            for result in sub_results:
                results.append([nums[i], result[0], result[1]])

        return results

    
            
        
        