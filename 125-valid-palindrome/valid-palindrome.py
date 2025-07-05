class Solution:
    def isPalindrome(self, s: str) -> bool:
        if len(s) < 2:
            return True
        sep = ""
        s_processed = sep.join([char.lower() for char in s if char.isalnum()])
        len_s = len(s_processed)
        for i in range(len_s//2):
            if s_processed[i] != s_processed[len_s - 1 - i]:
                return False
        return True