class Solution {
public:
    string longestPalindrome(string s) {
        int length = s.length();
        if (length == 0) return "";

        string longest = "";

        for (int i = 0; i < length; i++) {
            int l = i, r = i;
            while (l >= 0 && r < length && s[l] == s[r]) {
                if (r - l + 1 > longest.length()) {
                    longest = s.substr(l, r - l + 1);
                }
                l--;
                r++;
            }
            
            l = i, r = i + 1;
            while (l >= 0 && r < length && s[l] == s[r]) {
                if (r - l + 1 > longest.length()) {
                    longest = s.substr(l, r - l + 1);
                }
                l--;
                r++;
            }
        }

        return longest;
    }
};
