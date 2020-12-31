// 정수를 반복해서 입력 받아(종료 조건 시까지), 가장 큰 값과 두 번째로 큰 값을 출력하는 
// 프로그램을 작성하시오. 
// - 종료조건: 0 입력(종료조건 전에 최소 2개의 정수는 입력된다고 가정) 
// - 전역변수 max1, max2 사용 
// - update_max 함수 정의 및 사용 - 인자는 하나의 정수 x, 반환형은 void
// - max1, max2, x 중 가장 큰 값은 max1에, 두 번째로 큰 값은 max2에 저장
#include <stdio.h>

int max1, max2;

void update_max(int x) 
{
    if (x == max1) 
        max2 = x;
    if (x > max1)
    {
        max2 = max1;
        max1 = x;
    }
    if (max1 > x && x > max2) 
        max2 = x;
}

int main()
{
    int n;
    scanf("%d", &n);
    max1 = n;

    scanf("%d", &n);
    max2 = n;

    update_max(n);
    while (n != 0)
    {
        scanf("%d", &n);
        update_max(n);
    }
    printf("%d %d", max1, max2);
    return 0;
}
