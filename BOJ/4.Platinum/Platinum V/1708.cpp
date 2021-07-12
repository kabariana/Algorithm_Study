// 무려 Convex Hull 문제!!
// 필요한 지식이라면 뭐가 있을까.. 하면.. 정렬, CCW, 그라함 스캔
// 컨벡스 헐 - 그라함 스캔 접근
#include <bits/stdc++.h>
using ll = long long;

const int MAX_SIZE = 1e5 + 1;

struct Coord{ // 좌표 구조체
    ll x, y;
};

Coord arr[MAX_SIZE];

ll getCCW(Coord a, Coord b, Coord c)
{
    return a.x*b.y+b.x*c.y+c.x*a.y-(b.x*a.y+c.x*b.y+a.x*c.y);
}

bool cmpCoord(Coord a, Coord b)
{
    if(a.y != b.y) return a.y < b.y;
    return a.x < b.x;
}

bool cmpCC(Coord a, Coord b) // CounterClockwise
{
    ll cc = getCCW(arr[0], a, b);
    if(cc != 0)
        return cc > 0; // 각도가 작은 순서대로
    return (a.x + a.y) < (b.x + b.y); // 점들이 일직선 상에 있을 때는 좌표가 작은 순서대로
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    // Input
    int N;
    std::cin >> N;

    for(int i = 0; i<N; i++)
        std::cin>> arr[i].x >> arr[i].y;
    
    std::sort(arr, arr + N, cmpCoord);
    std::sort(arr + 1, arr + N, cmpCC);

    std::stack<Coord> S;

    S.push(arr[0]);
    S.push(arr[1]);

    Coord oper1, oper2;

    for(int i = 2; i<N; i++)
    {
        while(S.size() >= 2)
        {
            oper2 = S.top();
            S.pop();
            oper1 = S.top();
            if(getCCW(oper1, oper2, arr[i]) > 0) // 왼쪽으로
            {
                S.push(oper2);
                break;
            }
        }
        S.push(arr[i]);
    }
    std::cout << S.size() << '\n';
    return 0;
}