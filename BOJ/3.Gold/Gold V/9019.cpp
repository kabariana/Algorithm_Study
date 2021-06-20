#include <bits/stdc++.h>
#define MAX 10000

bool visited[MAX];
int A, B;
std::deque<int> dqA, dqB;

std::string BFS()
{
    std::queue<std::pair<int, std::string>> q;
    q.push({A, ""});
    visited[A] = true;

    while(!q.empty())
    {
        int n = q.front().first;
        std::string tmp = q.front().second;
        q.pop();

        if(n == B)
            return tmp;
        
        // D에 대해서
        int current = (2*n)%MAX;
        if(!visited[current])
        {
            visited[current] = true;
            q.push({current, tmp + "D"});
        }
        // S에 대해서
        current = ((n-1) < 0 ? MAX-1 : n-1);
        if(!visited[current])
        {
            visited[current] = true;
            q.push({current, tmp + "S"});
        }
        // L에 대해서
        current = (n % 1000)* 10 + n / 1000;
        if(!visited[current])
        {
            visited[current] = true;
            q.push({current, tmp + "L"});
        }
        // R에 대해서
        current = (n % 10) * 1000 + n/10;
        if(!visited[current])
        {
            visited[current] = true;
            q.push({current, tmp + "R"});
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        memset(visited, false, sizeof(visited)); // 한 번 수행할 때 마다 메모리 초기화
        std::cin >> A >> B;
        std::cout << BFS() << '\n';
    }
    return 0;
}