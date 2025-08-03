def is_overlap(a, b):
    return a[0] <= b[1] and b[0] <= a[1]
def merge_intervals(a, b):
    new_start = min(a[0], b[0])
    new_end = max(a[1], b[1])
    return [new_start, new_end]

class Solution(object):
    def insert(self, intervals, newInterval):
        """
        :type intervals: List[List[int]]
        :type newInterval: List[int]
        :rtype: List[List[int]]
        """

        merged_intervals = []
        has_appended = False
        i = 0
        for i, interval in enumerate(intervals):
            if interval[0] > newInterval[1]:
                merged_intervals.append(newInterval)
                merged_intervals.append(interval)
                has_appended = True
                break
            if is_overlap(interval, newInterval):
                newInterval = merge_intervals(interval, newInterval)
            else:
                merged_intervals.append(interval)
        
        if not has_appended:
            merged_intervals.append(newInterval)

        for j in range(i+1, len(intervals)):
            merged_intervals.append(intervals[j])
        
        return merged_intervals


        