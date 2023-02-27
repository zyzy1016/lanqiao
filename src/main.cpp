#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

bool IfHuiwen(char *s, int low, int high)
{
    if (low > high)
    {
        return true;
    }
    if (s[low] != s[high])
    {
        return false;
    }
    else
        return IfHuiwen(s, low + 1, high - 1);
}

// 字符串判断回文
bool IfHuiwen(char *s)
{
    return IfHuiwen(s, 0, strlen(s) - 1);
}

// 整数判断回文
bool IntHuiwen(int n)
{
    int n1, n2;
    for (n1 = n, n2 = 0; n1 != 0; n1 /= 10)
    {
        n2 = 10 * n2 + n1 % 10;
    }
    if (n == n2)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    char s[100];
    cin >> n;
    int n1, n2, cnt;
    int ans[100], m = 0;
    ans[m] = n;
    while (!IntHuiwen(n))
    {
        for (n1 = n, n2 = 0; n1 != 0; n1 /= 10)
        {
            n2 = 10 * n2 + n1 % 10;
        }
        n += n2;
        m++;
        ans[m] = n;
    }
    ans[++m] = n;
    cout << m-1 << endl;
    for (int i = 0; i < m; i++)
    {
        if (i != m - 1)
        {
            cout << ans[i] << "---->";
        }else{
            cout << ans[i] <<endl;
        }
    }

    return 0;
}