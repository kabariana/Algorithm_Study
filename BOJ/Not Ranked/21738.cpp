#include <bits/stdc++.h>
#define SIZE 328001
using namespace std;

int N, S, P, res, cnt = 0;
vector<int> v[SIZE];
bool visited[SIZE];

void BFS(int a, int b)
{
    queue<pair<int, int>> q;
    q.push({a, b});
    visited[a] = true;
    while(!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        if(a <= S)
        {
            cnt++;
            res-= b;
            if(cnt == 2)
                return;
        }
        for(auto k : v[a]){
            if(!visited[k]){
                visited[k] = true;
                q.push({k, b+1});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> N >> S >> P;
    for(int i = 0; i<N-1; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    res = N-1;
    BFS(P, 0);
    cout << res << '\n';
    return 0;
}