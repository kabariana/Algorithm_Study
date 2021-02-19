#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double Sp, Sw, Np, Nw, Up, Uw;
    std::cin >> Sp >> Sw >> Np >> Nw >> Up >> Uw;

    Sp*=10, Sw*=10, Np*=10, Nw*=10, Up*=10, Uw*=10;

    if(Sp>=5000) Sp-=500;
    if(Np>=5000) Np-=500;
    if(Up>=5000) Up-=500;

    std::pair<double, char> S = {Sp/Sw, 'S'};
    std::pair<double, char> N = {Np/Nw, 'N'};
    std::pair<double, char> U = {Up/Uw, 'U'};

    std::cout << std::min({S, N, U}).second;
    return 0;
}