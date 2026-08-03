class Solution {
public:
    bool isPalindrome(int x) {
      string s = to_string(x);
      int low = 0;
      int high = s.length()-1;
      while(low<high){
        if(low == high){
            return true;
        }
        else if(s[low] == s[high]){
            low++;
            high--;
        continue;
        }
        return false;
      }
      return true;
    }
};