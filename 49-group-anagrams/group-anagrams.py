class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = {}
        res = []

        for s in strs:
            sortedStr = tuple(sorted(s))
            if tuple(sortedStr) not in groups:
                groups[sortedStr] = []
            groups[sortedStr].append(s)

        for group in groups.values():
            res.append(group)

        return res