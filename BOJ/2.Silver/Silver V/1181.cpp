#include <bits/stdc++.h>

bool compare(const std::string& a, const std::string& b)
{
    if(a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
}

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<std::string> v;

    while(n--)
    {
        std::string str;
        std::cin >> str;
        v.push_back(str);
    }

    std::sort(v.begin(), v.end(), compare);

    std::string tmp;
    for(int i = 0; i<v.size(); i++)
    {

        if(tmp == v[i])
            continue;
        std::cout << v[i] << '\n';
        tmp = v[i];
    }
    return 0;
}