#include <stdio.h>
#define SIZE_MAX 10
#define QUERY "1. 0으로 채우기, 2. 0부터 1씩 증가시키며 채우기, 3. 현재 값 하나씩 증가시키기, 4. 현재 값 제곱하기\n기능을 선택하세요: "
#define RESULT "현재 배열 상태: "

// 콜백함수를 이용해서 배열의 각 인자를 채우는 함수
void fill_array(int arr[], int size, int (*func)(int))
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = func(arr[i]);
	}
}
// 0을 반환하는 함수
int fill_zero(int num) { return 0; }
// 현재값+1을 반환하는 함수
int increment(int num) { return num + 1; }
// 현재값의 제곱을 반환하는 함수
int square(int num) { return num * num; }
// 0부터 하나씩 증가시키며 값을 채워가는 함수
int fill_from_zero(int num) {
	static int value = 0;
	return value++;
}

int main() 
{
	int arr[SIZE_MAX];
	while (1) 
	{
		int menu;
		printf(QUERY);
		scanf("%d", &menu);
		switch (menu) 
		{
		case 1:
			// fill_array의 인자로 fill_zero 함수 사용
			fill_array(arr, SIZE_MAX, fill_zero);
			break;
		case 2:
			// fill_array의 인자로 fill_from_zero 함수 사용
			fill_array(arr, SIZE_MAX, fill_from_zero);
			break;
		case 3:
			// fill_array의 인자로 increment 함수 사용
			fill_array(arr, SIZE_MAX, increment);
			break;
		case 4:
			// fill_array의 인자로 square 함수 사용
			fill_array(arr, SIZE_MAX, square);
			break;
		}
		printf(RESULT);
		for (int i = 0; i < SIZE_MAX; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
}
