# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        if not root:
            return []
        def bfs(node):
            q = deque()
            q.append(node)

            results = []

            while q:
                level = []
                qLen = len(q)
                for _ in range(qLen):
                    ele = q.popleft()
                    level.append(ele.val)
                    if ele.left:
                        q.append(ele.left)
                    if ele.right:
                        q.append(ele.right)
                results.append(level)

            return results                

        return bfs(root)