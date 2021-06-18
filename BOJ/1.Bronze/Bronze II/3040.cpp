#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int sum = 0;
    std::vector<int> v(9);

    for(int i = 0; i < 9; i++)
        std::cin >> v[i];
    
    std::sort(v.begin(), v.end());

    do
    {
        sum = 0;
        for(int i = 0; i<7; i++)
            sum += v[i];
        if(sum == 100)
            break;
    } while (std::next_permutation(v.begin(), v.end()));

    for(int i = 0; i<7; i++)
        std::cout << v[i] <<'\n';

    return 0;
}