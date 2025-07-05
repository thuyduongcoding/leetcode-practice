class Solution:
    def isPalindrome(self, s: str) -> bool:
        if len(s) < 2:
            return True
        sep = ""
        s_processed = sep.join([char.lower() for char in s if char.isalnum()])
        if s_processed == s_processed[::-1]:
            return True
        return False