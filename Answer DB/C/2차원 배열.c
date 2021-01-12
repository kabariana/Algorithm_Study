//1�� ����
#include <stdio.h>
#define QUERY_SCORE "%d�� �л��� ������ �Է��ϼ���. (�߰� �⸻ ���� �⼮): "
#define RES_HEAD "\n�л���ȣ: \t�߰�\t�⸻\t����\t�⼮\t: ����\n"
#define RES_LINE "========================================================\n"
#define RES_SCORE "%d�� �л�: \t%d\t%d\t%d\t%d\t: %d\n"
#define RES_AVG "�׸� ���: \t%.2lf\t%.2lf\t%.2lf\t%.2lf\t\n"

// ����ڷκ��� �Է��� �޾� score �迭�� �����ϴ� �Լ�
void input_score(int score[][4])
{
	for (int i = 0; i < 5; i++)
	{
		printf(QUERY_SCORE, i+1);
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
}

int main()
{
	int score[5][4], sum[5] = { 0, };
	double avg[5] = { 0, };

	input_score(score);

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
			sum[i] += score[i][j];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
			avg[i] += score[j][i];
		avg[i] /= 5;
	}

	printf(RES_HEAD);
	printf(RES_LINE);
	for (int i = 0; i < 5; i++)
		printf(RES_SCORE, i+1, score[i][0], score[i][1], score[i][2], score[i][3], sum[i]);
	printf(RES_LINE);
	printf(RES_AVG, avg[0], avg[1], avg[2], avg[3]);
    return 0;
}
