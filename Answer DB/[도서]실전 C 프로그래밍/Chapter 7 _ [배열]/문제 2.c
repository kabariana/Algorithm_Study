// 배열에 7개의 문자를 입력 받아서 저장하시오.
// 문자 중에서 cat가 몇 번 있는지 횟수를 출력하시오. cat 가 이어진 경우만 찾는다.
#include <stdio.h>

int main()
{
	char ch[8] = { NULL };
	int cnt = 0;

	scanf("%s", &ch);

	for (int i = 0; i < 5; i++)
	{
		if (ch[i] == 'c') {
			if (ch[i + 1] == 'a') {
				if (ch[i + 2] == 't')
					cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
