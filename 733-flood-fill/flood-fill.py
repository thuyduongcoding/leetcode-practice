class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:

        original_color = image[sr][sc]
        if color == original_color:
            return image

        def dfs(r: int, c: int):
            if r < 0 or r >= len(image) or c < 0 or c >= len(image[0]) or image[r][c] != original_color:
                return
            image[r][c] = color

            for dr, dc in [[-1,0], [1,0], [0,-1],[0,1]]:
                dfs(r + dr, c + dc)

        dfs(sr, sc)
        return image