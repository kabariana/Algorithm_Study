#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int num, cnt = 0;
    std::vector<int> v;
    
    while(true)
    {
        std::cin >> num;

        if(num == -1)
            break;

        if(num == 0)
        {
            for(int i = 0; i<v.size(); i++)
            {
                for(int j = 0; j<v.size(); j++)
                {
                    if(v[j]*2 == v[i])
                        cnt++;
                }
            }
            std::cout << cnt << '\n';
            cnt = 0;
            v.clear();
        }
        else
            v.push_back(num);
    }
    return 0;
}