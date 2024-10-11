class Solution {
public:
    bool isPalindrome(string s) {
        
        // My solution:
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            // Store only valid alphanumeric characters
            if ((s[i] >= 'A' && s[i] <= 'Z') ||   // Uppercase letters
                (s[i] >= 'a' && s[i] <= 'z') ||   // Lowercase letters
                (s[i] >= '0' && s[i] <= '9')) {   // Digits
                s[j] = tolower(s[i]); // Store valid character
                j++;         // Increment index for valid characters
            }
        }
        // Resize the string to contain only valid characters
        s.resize(j);
        
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            if (s[start] == s[end]) {
                start++;
                end--;
            } else {
                return false;
            }
        }
        return true;

    //     // Better solution:
    //     int start = 0;
    //     int end = s.size() - 1;

    //     while (start < end) {
    //         if (!isalnum(s[start])){
    //             start++;
    //             continue; // skip the current iteration
    //         }
    //         if (!isalnum(s[end])) {
    //             end--;
    //             continue; // skip the current iteration
    //         }
    //         if (tolower(s[start]) == tolower(s[end])){
    //             start++;
    //             end--;
    //         } else {
    //             return false;
    //         }
    //     }
    //     return true;
    }
};