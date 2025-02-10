#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> num;
    string s = "dfa12321afd";
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(s[i])) {
            num.push_back(s[i] - '0');
        }
    }
    for(int i = 0; i < num.size(); i++) {
        cout << num[i] << " ";
    }
    return 0;
}