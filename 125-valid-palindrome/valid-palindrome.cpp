class Solution {
public:
    bool isPalindrome(string s) {

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
        
        int first = 0;
        int last = s.size() - 1;

        while (first < last) {
            if (s[first] == s[last]) {
                first++;
                last--;
            } else {
                return false;
            }
        }


        return true;
    }
};