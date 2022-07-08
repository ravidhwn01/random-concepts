
#include <iostream>
#include <string>
using namespace std;
 // printing binary number of an integer
string toBinary(int n, int len)
{
    string binary;
    for (unsigned i = (1 << len - 1); i > 0; i = i / 2) {
        binary += (n & i) ? "1" : "0";
    }
 
    return binary;
}
 
int main()
{
    int n = 20;
    int len = 32;
 
    cout << "The binary representation of " << n << " is " << toBinary(n, len);
 
    return 0;
}
