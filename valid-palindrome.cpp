
// check if a string is a palindrome considering only alphanumeric character and ignoring cases

class Solution {
    public:
        bool isPalindrome(string s) {
            int left = 0;
            int right = s.size() - 1;
            while(left < right){

                while(left < right && !isalnum(s[left])) left++;
                while(left < right && !isalnum(s[right])) right--;

                if(islower(s[left]) != islower(s[right])){
                    return false;
                }

                left++;
                right--;
            }

            return true;
        }
    };