#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v1(n);
        vector<int> v2(q);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> v2[i];
            int tong_buoc_di = 0;
            for (int j = 0; j < n; j++)
            {
                if (v2[i] >= v1[j])
                {
                    tong_buoc_di += v1[j];
                }
                else
                {
                    break;
                }
            }
            cout << tong_buoc_di << ' ';
        }
    }
    return 0;
}