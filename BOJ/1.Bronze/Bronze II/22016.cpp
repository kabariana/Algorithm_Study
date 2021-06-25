#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, K;
    std::string T;

    std::cin >> N >> K;
    std::cin >> T;

    for(int i = K-1; i<T.length(); i++)
    {
        if(T[i] >= 'A' && T[i] <= 'Z')  
            T[i] += 32;
        else if(T[i] >= 'a' && T[i] <= 'z')
            T[i] -= 32;
    }
    std::cout << T <<'\n';
    return 0;
}