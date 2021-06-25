#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC, x1, y1, x2, y2, n, cx, cy, r;
    std::cin >> TC;

    

    
    while(TC--)
    {
        std::cin >> x1 >> y1 >> x2 >> y2;
        std::cin >> n;

        int from = 0, to = 0;
        while(n--)
        {
            std::cin >> cx >> cy >> r;

            if(std::pow(cx-x1, 2) + std::pow(cy-y1, 2) < r*r)
              if(std::pow(cx-x2, 2) + std::pow(cy-y2, 2) > r*r)
                to++;
            if(std::pow(cx-x1, 2) + std::pow(cy-y1, 2) > r*r)
              if(std::pow(cx-x2, 2) + std::pow(cy-y2, 2) < r*r)
                from++;
        }
        std::cout << from + to <<'\n';
    }
    return 0;
}