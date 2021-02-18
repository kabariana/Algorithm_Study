#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h1, h2, m1, m2, s1, s2;
	int r_h, r_m, r_s;

    for(int i = 0; i<3; i++)
    {
        std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        if (s2 - s1 >= 0)
			r_s = s2 - s1;
		else
		{
			r_s = s2 - s1 + 60;
			m2--;
		}
		if (m2 - m1 >= 0)
			r_m = m2 - m1;
		else
		{
			r_m = m2 - m1 + 60;
			h2--;
		}
		r_h = h2 - h1;
        std::cout << r_h << ' ' << r_m << ' ' << r_s << '\n';
    }
    return 0;
}