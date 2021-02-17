#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    if(std::prev_permutation(v.begin(), v.end()))
    {
        for(int i = 0; i<n; i++)
            std::cout << v[i] << ' ';
    }
    else
        std::cout << "-1";
    return 0;
}