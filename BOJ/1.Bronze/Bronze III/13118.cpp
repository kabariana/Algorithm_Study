#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::vector<int> v(4);
    for(int i = 0; i<4; i++)
        std::cin >> v[i];
    
    int x, y, r;
    std::cin >> x >> y >> r;

    int idx = 0;
    for(int i = 0; i<4; i++)
        if(v[i]==x)
            idx = i+1;
    std::cout << idx;
    return 0;
}