#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string A, B;
    std::cin >> A >> B;

    int minV = INT_MAX;
    for(int i = 0; i<=B.size()-A.size(); i++)
    {
        int cnt = 0;
        for(int j = 0; j<A.size(); j++)
            if(A[j] != B[j+i])
                cnt++;
        minV = std::min(cnt, minV);
    }
    std::cout << minV;
    return 0;
}