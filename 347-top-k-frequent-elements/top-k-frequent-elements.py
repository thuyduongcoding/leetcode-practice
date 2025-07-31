class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq_map = {}
        for num in nums:
            freq_map[num] = freq_map.get(num, 0) + 1  

        arr = []
        for key, value in freq_map.items():
            arr.append([value, key])
        
        arr.sort()

        res = []
        for _ in range(k):
            res.append(arr.pop()[1])
        return res
        