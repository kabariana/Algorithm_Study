#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::string A, B;
    std::cin >> A >> B;

    ll result = 0;
    for(int i = 0; A[i]; i++)
    {
        for(int j = 0; B[j]; j++)
            result += (A[i]-'0') * (B[j]-'0');
    }
    std::cout << result;
    return 0;
}