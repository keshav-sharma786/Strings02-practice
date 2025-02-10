#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count = 0;
    int ans = 0;
    for(int i = 0; i < str.size(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count ++;
        }
        else {
            count = count*(count + 1)/2;
            ans += count;
            count = 0;
        }
    }
    
    count = count*(count + 1)/2;
    ans += count;
    

    cout << ans << endl;
    return 0;
}
// very good you yourself made the code from logic

