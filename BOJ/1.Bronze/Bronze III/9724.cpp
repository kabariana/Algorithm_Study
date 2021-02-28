#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    std::vector<int> v;
    for(int i = 1; i*i*i<=2000000000; i++)
        v.push_back(i*i*i);
    
    for(int i = 1; i<=T; i++)
    {
        int a, b, cnt = 0;
        std::cin >> a >> b;

        for(int i = 0; i<v.size();i++)
            if(v[i]>=a && v[i]<=b)
                cnt++;
        std::cout << "Case #"<<i<<": "<< cnt <<'\n';
    }
    return 0;
}