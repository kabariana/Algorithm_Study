#include <bits/stdc++.h>

struct stu {
    std::string name;
    int d, m, y;
};

bool compare(const struct stu& a, const struct stu& b)
{
    if (a.y < b.y)
        return true;
    else if (a.y == b.y)
    {
        if (a.m < b.m)
            return true;
        else if (a.m == b.m)
        {
            if (a.d < b.d)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    std::vector<stu> v;

    while (n--)
    {
        std::string name;
        int d, m, y;
        std::cin >> name >> d >> m >> y;
        v.push_back({ name, d, m, y });
    }
    std::sort(v.begin(), v.end(), compare);

    std::cout << v[v.size()-1].name << '\n';
    std::cout << v[0].name;
    return 0;
}