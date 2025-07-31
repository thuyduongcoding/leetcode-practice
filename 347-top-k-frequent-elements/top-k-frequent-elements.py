class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq_map = {}
        for num in nums:
            freq_map[num] = freq_map.get(num, 0) + 1
        
        freqs_values = list(freq_map.values())
        freq_keys = list(freq_map.keys())
        
        results = []
        for i in range(k):
            argmax = max(enumerate(freqs_values), key= lambda x: x[1])[0]
            results.append(freq_keys[argmax])
            freqs_values[argmax] = 0
        
        return results
        