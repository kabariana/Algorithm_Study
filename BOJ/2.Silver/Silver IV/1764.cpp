#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, m;
    std::cin >> n >> m;
    std::map<std::string, int> neverheard;
    for(int i = 0; i<n; i++)
    {
        std::string name;
        std::cin >> name;
        neverheard[name] = 1;
    }

    std::priority_queue<std::string, std::vector<std::string>, std::greater<std::string>> pq;
    for(int i = 0; i<m; i++)
    {
        std::string name;
        std::cin >> name;
        if(neverheard[name] == 1)
            pq.push(name);
    }
    std::cout << pq.size() << '\n';
    while(!pq.empty())
    {
        std::cout << pq.top() << '\n';
        pq.pop();
    }
    return 0;
}