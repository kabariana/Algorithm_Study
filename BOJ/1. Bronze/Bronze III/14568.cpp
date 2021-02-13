#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, cnt = 0;
    std::cin >> n;

    for(int a = 1; a <= 100; a++)
        for(int b = 1; b <= 100 - a; b++)
            for(int c = 1; c <= 100 - a - b; c++)
                if(a >= b + 2 && c%2 == 0 && b != 0 && c != 0 && a + b + c == n)
                    cnt++;
    std::cout << cnt;
    return 0;
}