#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int N, L, D;
    std::cin >> N >> L >> D;

    std::vector<int> time;
    // 노래가 재생되는 동안에는 1, 재생이 되지 않는 경우에는 0 
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<L; j++)
            time.push_back(1);
        for(int j=0; j<5; j++)
            time.push_back(0);
    }

    int cnt = 0;
    while(true)
    {
        if(cnt > time.size())
            break;
        if(time[cnt]==0)
            break;
        else
            cnt+=D;
    }
    std::cout << cnt;
    return 0;
}