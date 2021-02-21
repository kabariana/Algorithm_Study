#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c;
    std::cin >> a >> b >> c;
    
    int res;
    if(b-a > c-b)
        res = b-a-1;
    else
        res = c-b-1;
    std::cout << res;
}