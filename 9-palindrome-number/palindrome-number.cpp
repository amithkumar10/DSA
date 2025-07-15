class Solution {
public:
    bool isPalindrome(int x) {
        int originalNum = x;
        string s = to_string(originalNum);
        reverse(s.begin(), s.end());
           long long reversed = stoll(s); 

        if(x == reversed){
            return true;
        }
    return false;
    }

};