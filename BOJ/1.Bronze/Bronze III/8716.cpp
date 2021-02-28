#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    ll x[4];
    ll y[4];
    ll lx, ly, rx, ry, w, h;
    for(int i = 0; i<8; i++)
    {
        if(i%2==0)
            std::cin >> x[i/2];
        else
            std::cin >> y[(i-1)/2];
    }
    if (x[1] < x[2])
		std::cout << "0";

	else if (x[0] > x[3])
		std::cout << "0";

	else if (y[0] < y[3])
		std::cout << "0";

	else if (y[1] > y[2])
		std::cout << "0";
	else
	{
		lx = std::max(x[0], x[2]);
		ly = std::min(y[0], y[2]);
		rx = std::min(x[1], x[3]);
		ry = std::max(y[1], y[3]);
		w = rx - lx;
		h = ry - ly;
		std::cout << std::abs(w * h);
	}
	return 0;
}