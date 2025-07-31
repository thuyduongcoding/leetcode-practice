class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        def convert_word_to_tuple(word: str):
            l = [0] * 26
            for c in word:
                l[ord(c) - ord('a')] +=1
            return tuple(l)

        char_list_map = {}

        for word in strs:
            word_count_tuple = convert_word_to_tuple(word)
            if word_count_tuple not in char_list_map:
                char_list_map[word_count_tuple] = []
            char_list_map[word_count_tuple].append(word)

        result = []
        for key, value in char_list_map.items():
            result.append(value)

        return result
            
        