class Solution {
public:
    // unordered_map<char, int> find_occurence(string a) {
    //     unordered_map<char, int> a_map;
    //     for (char ele : a) {
    //         if (a_map.find(ele) == a_map.end()) {
    //             a_map[ele] = 0;
    //         } else {
    //             a_map[ele]++;
    //         }
    //     }
    //     return a_map;
    // }
    bool isAnagram(string s, string t) {
        // My solution
        // unordered_map<char, int> s_map = find_occurence(s);
        // unordered_map<char, int> t_map = find_occurence(t);

        // for (auto& pair : s_map) {
        //     if (t_map.find(pair.first) == t_map.end()) {
        //         return false;
        //     } else if (s_map[pair.first] != t_map[pair.first]) {
        //         return false;
        //     }
        // }

        // for (auto& pair : t_map) {
        //     if (s_map.find(pair.first) == s_map.end()) {
        //         return false;
        //     } else if (t_map[pair.first] != s_map[pair.first]) {
        //         return false;
        //     }
        // }

        // return true;

        // Better solution

        int s_size = s.size();
        int t_size = t.size();

        vector<int> cnt(26);

        if (s_size!=t_size) {
            return false;
        } 

        for(int i = 0; i < s_size; i++) {
            cnt[s[i] - 'a']++;
        }
        for (int i = 0; i < t_size; i++) {
            cnt[t[i] - 'a']--;
        }

        for(int i = 0; i < cnt.size(); i++) {
            if (cnt[i] != 0) {
                return false;
            }
        }
        return true;

    }
};