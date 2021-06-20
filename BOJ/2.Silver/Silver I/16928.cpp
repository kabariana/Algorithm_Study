#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);


    std::vector<int> v(3);

    for(int i = 0; i<3; i++)
        std::cin>> v[i];
    int max = v[0];
    for(int i = 0; i<3; i++)
        if(max < v[i])
            max = v[i];

    int res = 0;
    for(int i = 0; i<3; i++)
        res += (max - v[i]);

    std::cout << res <<'\n';
    return 0;
}