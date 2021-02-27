#include <bits/stdc++.h>

void convert(int T)
{
    if(T)
    {
        convert(T/9);
        putchar('0'+T%9);
    }
}

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    convert(T);
    return 0;
}