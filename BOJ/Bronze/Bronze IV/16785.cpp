#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c, cWeek, nWeek, div, result;
    std::cin >> a >> b >> c;
    cWeek = a * 7 + b;
    nWeek = c / cWeek;
    div = c - nWeek * cWeek;
    result = (div + a -1) / a;
    if(result > 7)
        result = 7;
    else
        result += nWeek*7;
    std::cout << result;
    return 0;
}