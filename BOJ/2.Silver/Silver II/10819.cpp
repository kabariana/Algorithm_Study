#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    
    std::sort(v.begin(), v.end());

    int maxv = INT_MIN;
    do
    {
        int temp = 0;
        for(int i = 0; i<n-1; i++)
            temp+=std::abs(v[i]-v[i+1]);
        maxv = std::max(maxv, temp);
    }while(std::next_permutation(v.begin(), v.end()));

    std::cout << maxv;
    return 0;
}