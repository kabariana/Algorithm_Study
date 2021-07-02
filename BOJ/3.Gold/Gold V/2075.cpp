#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::priority_queue<int> pq;

    std::cin >> N;
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            int num;
            std::cin >> num;
            pq.push(-num);
            if(pq.size() > N)
                pq.pop();
        }
    }
    std::cout << -pq.top() << '\n';
    return 0;
}