#include <stdio.h>
#include <string.h>
#define QUERY "�� �� �ʸ� �Է��ϼ���: "
#define RESULT "%02d:%02d:%02d"

// �ð�, ��, �ʿ� �ش��ϴ� ���ڰ� �������� ������ �������� üũ
// �������� ��� 1�� ��ȯ
// ���������� ���� ��� 0�� ��ȯ
int check_time(int hour, int minute, int second);

/**
* �ð��� �ش��ϴ� ���ڸ� ���ڿ��� ��ȯ�ϴ� �Լ�
* check_time �Լ��� ȣ���ؼ� ��, ��, �ʿ� �ش��ϴ� ���� ���ڸ� üũ��
* ���ڰ� ���� ������ ���̶�� hh:mm:ss ���·� ���� str_time ������ ����
* ���� ������ ���ڰ� �ƴ϶�� -1�� ��ȯ
*
* @param str_time �ð��� �ش��ϴ� ���ڿ��� �������� ����
* @param size str_time ������ ũ��
* @param hour �ð��� �ش��ϴ� ������
* @param minute �п� �ش��ϴ� ������
* @param second �ʿ� �ش��ϴ� ������
* @return ��������� ���̸� str_time�� ����, ������ְ� �ƴϸ� -1
*/
int time_to_string(char str_time[], int size, int hour, int minute, int second);
// chech_time �Լ��� ȣ���ؼ� hour, minute, second �Լ��� ��������� ������ üũ
// ������ְ� �ƴϸ� -1
// ��, ��, �� �� 2�ڸ��� 6�ڸ� + �ݷ�(:) 2�ڸ� + NULL ���� 1�ڸ�, �ּ� 9�ڸ��� �ʿ���
// ȭ�鿡 ����ϵ� ���ڿ� ������ ����Ϸ��� sprintf �Լ��� �����
// sprintf(���� ������ ���ڿ� ����, ���������� ���ڿ�, ���������ڿ� �� ������);
// http://www.cplusplus.com/reference/cstdio/sprintf/
// ������ str_time�� ����� ���ڿ��� ���̸� ��ȯ

int main(void) {
   int hour, minute, second;
   char str_time[256];
   do {
       scanf("%d %d %d", &hour, &minute, &second);
   } while(time_to_string(str_time, 255, hour, minute, second) == -1);
   printf("%s\n", str_time);
   return 0;
}

int check_time(int hour, int minute, int second) {
    if (hour < 0 || hour > 23) return 0;
    if (minute < 0 || minute > 59) return 0;
    if (second < 0 || second > 59) return 0;
    return 1;
}

int time_to_string(char str_time[], int size, int hour, int minute, int second) {
    if (!check_time(hour, minute, second)) return -1;
    return snprintf(str_time, size, RESULT, hour, minute, second);
}

