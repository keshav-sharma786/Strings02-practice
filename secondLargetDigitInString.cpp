#include <bits/stdc++.h>
using namespace std;

int main() {
    int max = 0;
    int secMax = 0;
    vector<int> v;
    // to calculate the second largest digit in the string consisting of digits 0 to 9
    string str = "987610";
    cout << str << endl;
    int num = stoll(str);
    cout << num << endl;
    while(num != 0) {
        v.push_back(num % 10);
        num = num / 10;
    }
    reverse(v.begin(), v.end());
    // finding max number first
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > max) {
            max = v[i];
        }
    }
    // finding second max
    for(int i = 0; i < v.size(); i++) {
        if(v[i] < max && v[i] > secMax) {
            secMax = v[i];
        }
    }
    cout << secMax << endl;
    return 0;
}