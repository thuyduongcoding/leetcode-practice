class Solution(object):
    def evalRPN(self, tokens):
        """
        :type tokens: List[str]
        :rtype: int
        """
        stack = deque()
        arithmetic_list = ['+', '-', '*', '/']
        for i in range(len(tokens)):
            if tokens[i] in arithmetic_list:
                ele2 = stack.pop()
                ele1 = stack.pop()
                if tokens[i] == '+':
                    stack.append(ele1 + ele2)
                elif tokens[i] == '-':
                    stack.append(ele1 - ele2)
                elif tokens[i] == '*':
                    stack.append(ele1 * ele2)
                else:
                    stack.append(int(float(ele1)/ele2))
            else:
                stack.append(int(tokens[i]))
        return stack[0]                
        