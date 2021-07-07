// 구간의 길이는 항상 홀수만 주어짘ㅁ
// 알파벳을 차례대로 2개씩 배치
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M, Q;
    std::string str;
    std::cin >> N >> M >> Q;

    int tmp = 0;
    for(int i = 0; i < M; i++)
    {
        str += ('a' + tmp);
        if(i%2)
            tmp = (tmp + 1) % N;
    }
    for(int i = 0; i<N; i++)
    {
        int s, e;
        std::cin >> s >> e;
    }
    std::cout << str << '\n';
    return 0;
}