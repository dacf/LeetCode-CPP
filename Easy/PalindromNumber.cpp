#include < vector >
using namespace std;
class Solution {
  public:
    bool isPalindrome(int x) {
      int temp = x;
      std::vector < int > res;
      int result = 0;
      if (temp < 0) {
        return false;
      } else {
        while (temp != 0) {
          res.push_back(temp % 10);
          temp = temp / 10;
        }
        for (int i = 0; i < res.size(); ++i) {
          result = result * 10 + res[i];
        }
        if (result == x) {
          return true;
        } else {
          return false;
        }
      }
    }
};