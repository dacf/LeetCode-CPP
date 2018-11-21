#include <iostream>
#include <string>
#include "math.h"
#include <vector>
#include <string>
using namespace std;
  
// Function to print all sub strings 
        int reverse(int x) {
        int temp = x;
        std::vector<int> res;
        if(temp > 0) {
            while(temp != 0) {
                res.push_back(temp % 10);
                temp = temp / 10;
            }
            for(int i=0; i<res.size(); ++i){
                 std::cout << res[i];
             }
         } else {
        temp = abs(temp);
                   while(temp != 0) {
                res.push_back(temp % 10);
                temp = temp / 10;
            }
            for(int i=0; i<res.size(); ++i){
                 std::cout << res[i];
             }
         }

         }


int main(int argc, const char * argv[]) {
    int hex_str;
    cin >> hex_str;
    reverse(hex_str); 
    // cout << hex2dec(hex_str) << endl;
    return 0;
}