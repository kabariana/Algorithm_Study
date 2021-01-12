#include <stdio.h>
#define SIZE_MAX 10
#define QUERY "1. 0���� ä���, 2. 0���� 1�� ������Ű�� ä���, 3. ���� �� �ϳ��� ������Ű��, 4. ���� �� �����ϱ�\n����� �����ϼ���: "
#define RESULT "���� �迭 ����: "

// �ݹ��Լ��� �̿��ؼ� �迭�� �� ���ڸ� ä��� �Լ�
void fill_array(int arr[], int size, int (*func)(int))
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = func(arr[i]);
	}
}
// 0�� ��ȯ�ϴ� �Լ�
int fill_zero(int num) { return 0; }
// ���簪+1�� ��ȯ�ϴ� �Լ�
int increment(int num) { return num + 1; }
// ���簪�� ������ ��ȯ�ϴ� �Լ�
int square(int num) { return num * num; }
// 0���� �ϳ��� ������Ű�� ���� ä������ �Լ�
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
			// fill_array�� ���ڷ� fill_zero �Լ� ���
			fill_array(arr, SIZE_MAX, fill_zero);
			break;
		case 2:
			// fill_array�� ���ڷ� fill_from_zero �Լ� ���
			fill_array(arr, SIZE_MAX, fill_from_zero);
			break;
		case 3:
			// fill_array�� ���ڷ� increment �Լ� ���
			fill_array(arr, SIZE_MAX, increment);
			break;
		case 4:
			// fill_array�� ���ڷ� square �Լ� ���
			fill_array(arr, SIZE_MAX, square);
			break;
		}
		printf(RESULT);
		for (int i = 0; i < SIZE_MAX; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
}
