class Solution {
public:
    unordered_map<char, int> find_occurence(string a) {
        unordered_map<char, int> a_map;
        for (char ele : a) {
            if (a_map.find(ele) == a_map.end()) {
                a_map[ele] = 0;
            } else {
                a_map[ele]++;
            }
        }
        return a_map;
    }
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map = find_occurence(s);
        unordered_map<char, int> t_map = find_occurence(t);

        for (auto& pair : s_map) {
            if (t_map.find(pair.first) == t_map.end()) {
                return false;
            } else if (s_map[pair.first] != t_map[pair.first]) {
                return false;
            }
        }

        for (auto& pair : t_map) {
            if (s_map.find(pair.first) == s_map.end()) {
                return false;
            } else if (t_map[pair.first] != s_map[pair.first]) {
                return false;
            }
        }

        return true;

    }
};