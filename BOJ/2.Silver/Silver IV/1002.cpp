#include <bits/stdc++.h>

double getDistance(int x1, int y1, int x2, int y2)
{
    return std::sqrt(std::pow(x1-x2, 2) + std::pow(y1-y2, 2));
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC, x1, y1, r1, x2, y2, r2;
    std::cin >> TC;

    while(TC--)
    {
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if(r1 > r2)
            std::swap(r1, r2);
        double dist = getDistance(x1, y1, x2, y2);
    
        if(dist <= r2)
        {
            if(x1 == x2 && y1 == y2 && r1 == r2)
                std::cout << "-1\n";
            else if(r1 + dist == r2)
                std::cout << "1\n";
            else if(r1 + dist > r2)
                std::cout << "2\n";
            else if(r1 + dist < r2)
                std::cout << "0\n";
        }
        else
        {
            if(r1 + r2 < dist)
                std::cout << "0\n";
            else if(r1 + r2 > dist)
                std::cout << "2\n";
            else if(r1 + r2 == dist)
                std::cout << "1\n";
        }
    }
    return 0;
}