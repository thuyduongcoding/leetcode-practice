class MyQueue(object):

    def __init__(self):
        self.stack1 = deque()
        self.stack2 = deque()        

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        if len(self.stack1) == 0:
            self.stack1.append(x)
        else:
            self.stack2.append(x) 
        

    def pop(self):
        """
        :rtype: int
        """
        if len(self.stack1) == 0:
            return None
        value = self.stack1.pop()

        if len(self.stack2) == 0:
            return value

        while len(self.stack2) > 0:
            self.stack1.append(self.stack2.pop())
        
        next_value = self.stack1.pop()

        while len(self.stack1) > 0:
            self.stack2.append(self.stack1.pop())
        
        self.stack1.append(next_value)

        return value

        

    def peek(self):
        """
        :rtype: int
        """
        if len(self.stack1) != 0:
            return self.stack1[0]
        return None
        

    def empty(self):
        """
        :rtype: bool
        """
        return len(self.stack1) == 0 and len(self.stack2) == 0 
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()