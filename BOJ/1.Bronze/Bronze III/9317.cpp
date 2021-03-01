#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        double D;
        int ResHor, ResVer;
        std::cin >> D >> ResHor >> ResVer;
        if(!D && !ResHor && !ResVer)
            break;
        std::cout << std::fixed << "Horizontal DPI: "<< std::setprecision(2) << ResHor/(16*D/std::sqrt(337)) << '\n';
        std::cout << std::fixed << "Vertical DPI: "<< std::setprecision(2) << ResVer/(9*D/std::sqrt(337)) << '\n';
    }
    return 0;
}