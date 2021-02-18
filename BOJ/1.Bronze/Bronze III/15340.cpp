// 데이터로 주어지는 것은 각 학생 별 통화사용량, 데이터 사용량
// 각 통신사별로 금액 계산하여 가장 적은 금액을 출력
#include<bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int c, d;
        std::cin >> c >> d;

        if(c == 0 && d == 0)
            break;

        std::vector<int> v(3);

        v[0] = 30*c + 40*d;
        v[1] = 35*c + 30*d;
        v[2] = 40*c + 20*d;

        std::sort(v.begin(), v.end());
        std::cout << v[0] <<'\n';
    }
    return 0;
}