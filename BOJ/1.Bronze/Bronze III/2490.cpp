#include <bits/stdc++.h>

char func(int n)
{
	char res;
	switch (n)
	{
	case 0:
		res = 'D';
		break;
	case 1:
		res = 'C';
		break;
	case 2:
		res = 'B';
		break;
	case 3:
		res = 'A';
		break;
	case 4:
		res = 'E';
		break;
	}
	return res;
}

int main(int argc, char* argv[])
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr), std::cout.tie(nullptr);

	int T = 3, temp, cnt1 = 0;
	
	while (T--)
	{
		cnt1 = 0;
		for (int i = 0; i < 4; i++)
		{
			std::cin >> temp;
			if (temp)
				cnt1++;
		}
		std::cout << func(cnt1) << '\n';
	}
	return 0;
}