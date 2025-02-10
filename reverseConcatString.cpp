#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // input a string
    string str;
    string rev;
    getline(cin, str);
    // printing the string that the user has input
    cout << str << "\n";
    rev = str;
    // now reversing the string that the user has input
    reverse(rev.begin(), rev.end());
    cout << rev << endl;
    // now concatenating the string with it's reverse part
    str = str + rev;
    cout << str << endl; 
    return 0;
}
// very good! yourself done!