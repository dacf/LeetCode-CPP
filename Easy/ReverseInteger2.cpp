class Solution {
public:
    int reverse(long x) {
        if(x > INT_MAX || x < INT_MIN){
            return 0;
        }
        int divider = 10;
        int flag = 0;
        long res = 0;
        if(x < 0){
            flag = 1;
            x = x * -1;
        }
    while(x > 0){
           res += x % 10;
            if(x > 9){
            res = res * 10;
                }
           x = x / divider;
                      
       }
        if(res > INT_MAX || res < INT_MIN){
            return 0;
        }else if (flag == 1){
          return res * -1;  
        } else { 
            return res;
        }
    }
};