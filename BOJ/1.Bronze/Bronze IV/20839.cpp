#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int X, Y, Z, x, y, z;

    std::cin >> X >> Y >> Z;
    std::cin >> x >> y >> z;

    if(z < Z) 
        std::cout << "F";
    else if(y*2 < Y)
        std::cout << "E";
    else if(y < Y)
        std::cout << "D";
    else if(x*2 < X)
        std::cout << "C";
    else if(x < X)
        std::cout << "B";
    else 
        std::cout << "A";
    std::cout << "\n";
    return 0;
}