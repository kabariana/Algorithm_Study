#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string a, b, c = "";
    std::cin >> a >> b;
    for(int i = 1; true; i++)
    {
        c+=a;
        int idx = 0;
        for(int j = 0; j<c.size() && idx<b.size(); j++)
            if(c[j]==b[idx])
                idx++;
        if(idx == b.size())
        {
            std::cout << i;
            return 0;
        }
    }
}