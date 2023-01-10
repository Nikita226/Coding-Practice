#include<bits/stdc++.h>
using namespace std;

void csum3(int index, int sum, int n,vector<vector<int>>& Fans, vector<int>& ans, int k)
{
    if(sum == n && k == 0)
    {
        Fans.push_back(ans);
        return;
    }   
    if(sum > n)
        return; 

    for (int i = index; i <= 9; i++)
    {
        if (i > n)
            break;
        ans.push_back(i);
        csum3(i+1, sum + i, n, Fans, ans, k-1);
        ans.pop_back();
    }
}

int main()
{
    int n = 9, k = 3, sum = 0;
    vector<vector<int>> v;
    vector<int> x;
    csum3(1, 0, n, v, x, k);
    for(int i = 0; i < v[0].size(); i++)
    {
        for(int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << "\n";
    }
    return 0;
}