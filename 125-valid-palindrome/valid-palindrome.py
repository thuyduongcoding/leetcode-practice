class Solution:
    def isPalindrome(self, s: str) -> bool:
        s_processed = re.sub('[^0-9a-zA-Z]+', '', s).lower()
        if s_processed == s_processed[::-1]:
            return True
        return False