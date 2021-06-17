#include <bits/stdc++.h>

std::map<std::string, bool> chk;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    
    std::vector<std::string> v;
    for(int i = 0; i<n; i++)
    {
        std::string name, status;
        std::cin >> name >> status;

        if(chk.count(name))
        {
            if(status == "enter")
                chk[name] = true;
            else
                chk[name] = false;
            continue;
        }
        v.push_back(name);
        chk[name] = true;
    }
    std::sort(v.begin(), v.end(), std::greater<std::string>());

    for(int i = 0; i<v.size(); i++)
        if(chk[v[i]])
            std::cout << v[i] << '\n';
    return 0;
}