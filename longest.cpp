#include <iostream>
#include <string>
#include "math.h"
#include <vector>
#include <string>
using namespace std;
  
// Function to print all sub strings 
void subString(string s, int n)  
{ 
  //Start here
	int count = n;
    for (int i = 0; i <= count; i++){
    	 for (int j = 0; j <= count; i++){
    	//End here
    		cout << s[j] << endl; 
    
    	}
    	count = count - 1;
}
} 


int main(int argc, const char * argv[]) {
    string hex_str;
    cin >> hex_str;
    subString(hex_str,hex_str.length()); 
    // cout << hex2dec(hex_str) << endl;
    return 0;
}