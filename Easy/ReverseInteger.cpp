#include < vector >
  using namespace std;
class Solution {
  public:
    int reverse(int x) {
      if (x > INT_MAX || x < INT_MIN) {
        return 0;
      } else {
        int temp = x;
        std::vector < int > res;
        if (temp > 0) {
          long result = 0;
          while (temp != 0) {
            res.push_back(temp % 10);
            temp = temp / 10;
          }
          for (int i = 0; i < res.size(); ++i) {
            result = result * 10 + res[i];
          }
          if (result > INT_MAX || result < INT_MIN) {
            return 0;
          } else {
            return result;
          }
        } else {
          long result = 0;
          temp = abs(temp);
          while (temp != 0) {
            res.push_back(temp % 10);
            temp = temp / 10;
          }
          for (int i = 0; i < res.size(); ++i) {
            result = result * 10 + res[i];
          }
          if (result > INT_MAX || result < INT_MIN) {
            return 0;
          } else {
            return -1 * result;
          }
        }
      }
    }
};