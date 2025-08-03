class MyStack(object):

    def __init__(self):
        self.queue1 = deque()
        self.queue2 = deque()
        

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        if self.queue1 or (not self.queue1 and not self.queue2):
            self.queue1.append(x)
        if self.queue2:
            self.queue2.append(x)
        

    def pop(self):
        """
        :rtype: int
        """
        if self.queue1:
            while len(self.queue1) > 1:
                self.queue2.append(self.queue1.popleft())                
            value = self.queue1.popleft()
            return value

        if self.queue2:
            while len(self.queue2) > 1:
                self.queue1.append(self.queue2.popleft())                
            value = self.queue2.popleft()
            return value
        

    def top(self):
        """
        :rtype: int
        """
        if self.queue1:
            while len(self.queue1) > 1:
                self.queue2.append(self.queue1.popleft())                
            value = self.queue1.popleft()
            self.queue2.append(value)
            return value

        if self.queue2:
            while len(self.queue2) > 1:
                self.queue1.append(self.queue2.popleft())                
            value = self.queue2.popleft()
            self.queue1.append(value)
            return value
        

    def empty(self):
        """
        :rtype: bool
        """
        return not self.queue1 and not self.queue2


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.popleft()
# param_3 = obj.top()
# param_4 = obj.empty()