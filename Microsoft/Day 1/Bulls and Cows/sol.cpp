#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s, g;
    s = "1123";
    g = "0111";
    int x = 0, y = 0;
    vector<int> counts(10, 0);
    vector<int> countg(10, 0);
    for (int i = 0; i < s.length(); i++)
    {
        counts[int(s[i] - '0')]++;
        countg[int(g[i] - '0')]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == g[i])
        {
            x++;
            int z = int(s[i] - '0');
            // cout << "x : " << counts[z] << " " << countg[z] << "\n";
            counts[z]--;
            countg[z]--;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        int z = int(s[i] - '0');
        if (counts[z] != 0 && countg[z] != 0)
        {
            y++;
            // cout << "y : " << counts[z] << " " << countg[z] << "\n";
            counts[z]--;
            countg[z]--;
        }
    }
    cout << "\n";
    string ans, w;
    ans = to_string(x);
    ans = ans + "A";
    w = to_string(y);
    w = w + "B";
    ans = ans + w;
    cout << ans;
    return 0;
}