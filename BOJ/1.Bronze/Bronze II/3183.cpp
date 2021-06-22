#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int dpm[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d, m, y;
    while(true)
    {
        std::cin >> d >> m >> y;
        if(!d && !m && !y)
            break;
        bool flag = true;
        bool leap = (y % 4 == 0 && y % 100 || y % 400 == 0);
        if(d<1 || m <1 || m > 12)
            flag = false;
        else if(m == 2 && d == 29)
            flag = leap;
        else if(dpm[m] < d)
            flag = false;

        if(flag)
            std::cout << "Valid\n";
        else
            std::cout << "Invalid\n"; 
    }
    return 0;
}