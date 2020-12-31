/*---------------------------------------------------------------------------------------------------------------------
 * 2020.12.23
 * ���� ���� : C��� �������� ���α׷�
 * ���� �� �� n�� �Է��ϰ� �� n�� ������ŭ å�� �̸��� ������ �̸��� ���� �Է��Ѵ�.
 * �ٽ� � �۰��� �̸��� �Է��ϸ�, n���� å �߿��� �� �۰��� �� �� ���� å�� 
 * ����� ǥ�õǴ� �������� ���α׷��� ¥���� �϶�.
 *---------------------------------------------------------------------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct book {
	char name_of_book[100];
	char author[25];
}Book;

int main()
{
	int num, cnt = 0;
	char author[25];

	printf("Input the number of books:\n");
	scanf("%d", &num);

	Book* b = (Book*)malloc(num * sizeof(Book));

	for (int i = 0; i < num; i++)
	{
		scanf("%s %s", b[i].name_of_book, b[i].author);
	}

	printf("Enter the name of the author:\n");
	scanf("%s", author);

	for (int i = 0; i < num; i++)
	{
		if (!strcmp(author, b[i].author))
			cnt++;
	}
	printf("%s:%d\n", author, cnt);

	free(b);

	return 0;
}
