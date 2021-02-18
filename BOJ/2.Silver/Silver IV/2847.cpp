// 마지막에 입력되는 값을 최대값으로 잡고, 최대값을 1씩 줄여가며
// 각 배열의 값이 최대값이 될 때까지 줄인 횟수를 세어줌.
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    int cnt = 0;
    int val = v[n-1];
    
    for(int i = n-2; i>=0; i--)
    {
        while(v[i] >= val)
        {
            v[i]--;
            cnt++;
        }
        val = v[i];
    }
    std::cout << cnt;
    return 0;
}