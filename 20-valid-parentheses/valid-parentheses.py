class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) == 1:
            return False
        if len(s) == 0:
            return True
        pairs = {")":"(", "}":"{", "]":"["}
        stack = []
        for char in s:
            if (char in pairs) and len(stack) > 0 and (stack[-1] == pairs[char]) :
                stack.pop()
            else:
                stack.append(char)
        if len(stack) == 0:
            return True
        else:
            return False

        
