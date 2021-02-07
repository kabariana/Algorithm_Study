#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int a, b, c, d, cnt = 0;
        std::cin >> a >> b >> c >> d;

        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;
        
        while(true)
        {
            if(a == b && b == c && c == d)
                break;
            int temp_a = a;
            int temp_b = b;
            int temp_c = c;
            int temp_d = d;
            a = std::abs(a-temp_b);
            b = std::abs(b-temp_c);
            c = std::abs(c-temp_d);
            d = std::abs(d-temp_a);

            cnt++;
        }
        std::cout << cnt << '\n';
    }
    return 0;
}