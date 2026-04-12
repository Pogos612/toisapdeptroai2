#include <bits/stdc++.h>
using namespace std;
/*
reverse(array, array + n);
sort(array, array + n);
  */
int main()
{
    int check = 1;
    int n;
    scanf("%d", &n);
    if (n < 2)
    {
        check = 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                check = 0;
                break;
            }
        }
    }
    if (check)
    {
        printf("Day la so nguyen to");
    }
    else
    {
        printf("Day khong phai so nguyen to");
    }
    return 0;
}
