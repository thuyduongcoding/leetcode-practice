class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<int> merge = newInterval;
        vector<vector<int>> results;
        if (intervals.empty()) {
            return {newInterval};
        }
        for (int i = 0; i < intervals.size(); i++) {
            int curr_start = intervals[i][0];
            int curr_end = intervals[i][1];
            int merge_start = merge[0];
            int merge_end = merge[1];

            if (curr_end < merge_start) { results.push_back(intervals[i]);} 
            else if (merge_end < curr_start) {
                results.push_back(merge);
                results.push_back(intervals[i]);
                for (int j = i + 1; j < intervals.size(); j++) {
                    results.push_back(intervals[j]);
                }
                merge = {};
                break;
            } else {
                merge[0] = std::min(curr_start, merge_start);
                merge[1] = std::max(curr_end, merge_end);
            }
        }
        if (!merge.empty()) { results.push_back(merge);}
        return results;
    }
};