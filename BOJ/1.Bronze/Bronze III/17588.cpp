#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    int max_value = v[n-1];
    
    if(max_value == n)
    {
        std::cout << "good job";
        return 0;
    }

    std::vector<bool> chk(max_value+1);
    for(int i = 0; i<v.size(); i++)
        chk[v[i]] = true;

    for(int i = 1; i<=max_value; i++)
        if(!chk[i])
            std::cout << i << '\n';
    return 0;
}