#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string op;
    int x = 0, y = 0;
    int n, num;
    cin>>n;
    int d = 0, dx, dy;
    int direction[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        cin >> num;
        if (op == "forward")
            d = d;
        if (op == "left")
            d = (d + 1) % 4;
        if (op == "right")
            d = (d + 3) % 4;
        if (op == "back")
            d = (d + 2) % 4;
        dx = direction[d][0];
        dy = direction[d][1];
        if(dx == 1 && dy == 0) x += num;
		else if(dx == 0 && dy == 1) y += num;
		else if(dx == -1 && dy == 0) x -= num;
		else y -= num;
    }
    cout << x << " " << y << endl;
    return 0;
}