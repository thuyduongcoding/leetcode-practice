# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        def dfs(node):
            if node is None:
                return 0
            left_h = self.maxDepth(node.left) + 1
            right_h = self.maxDepth(node.right) + 1
            return max(left_h, right_h)

        return dfs(root)
        