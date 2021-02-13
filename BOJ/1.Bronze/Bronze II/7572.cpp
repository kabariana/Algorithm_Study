#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    n+=(2400-2013);

    int a = (n+5)%12;
    int b = (n+9)%10;

    printf("%c%c\n", a+'A', b+'0');
    return 0;
}