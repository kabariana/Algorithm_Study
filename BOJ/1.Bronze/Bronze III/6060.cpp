// 도르래가 도는 방향 출력 0, 1 XOR 연산
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    int *v = new int[N+1];
    int *w = new int[N+1];

    for(int i = 0; i<N-1; i++)
    {
        int s, d, c;
        std::cin >> s >> d >> c;
        v[s] = d;
        w[s] = c;
    }

    int i = 1, ans = 0;
    while(i!=N)
    {
        if(w[i]!=0)
            ans^=w[i];
        i = v[i];
    }
    std::cout << ans;
    delete[] v;
    delete[] w;
    return 0;
}