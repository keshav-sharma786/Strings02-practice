#include <bits/stdc++.h>
using namespace std;

int main()
{
    // taking string input from the user
    string s, p;
    cin >> s >> p;
    // creating 2 vectors of 26 size
    vector<int> count_s(26, 0);
    vector<int> count_p(26, 0);
    vector<int> ans;
    int n = s.size();
    int m = p.size();
    if (m > n)
    {
        cout << "no answer exist" << "\n";
    }
    // traversing over p string
    for (int i = 0; i < m; i++)
    {
        count_p[p[i] - 'a']++;
    }
    int i = 0;
    for (; i < m; i++)
    {
        count_s[s[i] - 'a']++;
    }
    bool flag = true;
    for (int j = 0; j < 26; j++)
    {
        if (count_s[j] != count_p[j])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        ans.push_back(0);
    }
    while (i < n)
    {
        count_s[s[i - m] - 'a']--;
        count_s[s[i] - 'a']++;

        bool flag = true;
        for (int j = 0; j < 26; j++)
        {
            if (count_s[j] != count_p[j])
            {
                flag = false;
                break;
            }
        }
        if(flag) {
            ans.push_back(i - m + 1);
        }
        i++;
    }

    cout << "the indices from where p's anagrams begin are" << endl;
    for(auto x:ans)cout << x << " ";
    return 0;
}