class Solution:
    def isValid(self, s: str) -> bool:
        if not s: return True
        pairs = {")":"(", "}":"{", "]":"["}
        stack = []
        for char in s:
            if (char in pairs) and len(stack) > 0 and (stack[-1] == pairs[char]) :
                stack.pop()
            else:
                stack.append(char)
        return len(stack) == 0

        
