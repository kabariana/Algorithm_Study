#include <bits/stdc++.h>

int arr[3];
int res[3];

int main(int argc, char* argv[])
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    for(int i = 0; i<3; i++)
    {
        std::cin >> arr[i];
        int d1 = arr[i]%(a+b);
        int d2 = arr[i]%(c+d);
        if(d1 <= a && d1 != 0)
            res[i]++;
        if(d2 <= c && d2 != 0)
            res[i]++;
    }
    for(int i = 0; i<3; i++)
        std::cout << res[i] << '\n';
    return 0;
}