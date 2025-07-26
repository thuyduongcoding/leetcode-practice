class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) <= 1: return len(s)
        
        char_map = {}
        slow = 0
        fast = 1
        max_length = 1

        while slow < fast and fast < len(s):
            if s[slow] == s[fast]:
                slow+=1
                fast+=1
                continue
            char_map[s[slow]] = slow
            current_max = 1
            while fast < len(s) and s[fast] not in char_map:
                current_max +=1
                char_map[s[fast]] = fast
                fast+=1
            max_length = max(current_max, max_length)
            char_map = {}

            slow += 1
            fast = slow + 1
            
        
        return max_length



