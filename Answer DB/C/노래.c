#include <stdio.h>
#include <string.h>

#define SONG_LENGTH 40
#define MAX_SONG 20

#define QUERY_MENU "[ 0.���� 1.�߰� 2.���� 3.��� ] ����?"
#define QUERY_ADD "�뷡 ����? "
#define QUERY_FIND "ã�� �뷡 ����? "
#define QUERY_MOD "������ ����? "

#define ERR_NO_MORE "���̻� �뷡�� �߰��� �� �����ϴ�.\n"
#define ERR_NULL_CHAR "�� ���ڿ��� �뷡 �������� ����� �� �����ϴ�.\n"
#define ERR_NOT_FOUND "�뷡�� ã�� �� �����ϴ�.\n"

#define RES_LIST "<< �뷡 ��� >>"

/**
* �޴��� ����ϰ� ����ڷκ��� �޴� ��ȣ�� �޾ƿ��� �Լ�
* @return ����ڰ� ������ �޴��� ��ȣ
*/
int get_menu();

/**
* ����ڷκ��� �뷡 ������ �ް� ��Ͽ� �߰��ϴ� �Լ�
* @param songs �뷡 ����� �����ص� �迭
* @param count ������� ����� �뷡�� ��
* @return �߰� ���� �� 1, ���� �� 0
*/
int add_song(char songs[][SONG_LENGTH], int *count);

/**
* ����ڷκ��� ������ �Է¹ް�, �ٸ� �������� �����ϴ� �Լ�
* @param songs �뷡 ����� �����ص� �迭
* @param count ������� ����� �뷡�� ��
* @return �߰� ���� �� 1, ���� �� 0
*/
int update_song(char songs[][SONG_LENGTH], int count);

/**
* ������� ����� �뷡 ����� ����ϴ� �Լ�
* @param songs �뷡 ����� �����ص� �迭
* @param count ������� ����� �뷡�� ��
*/
void print_songs(const char songs[][SONG_LENGTH], int count);

int main(void)
{

    // �뷡���� �迭 ����
    char songs[MAX_SONG][SONG_LENGTH];
    int count = 0;
    // ���ѹݺ� ����
    while (1)
    {
        // ����ڷκ��� �޴��� ����
        int choice = get_menu();
        if (choice == 0)
        { // ���� �޴��� 0�̶�� �ݺ� ����
            break;
        }
        else if (choice == 1)
        { // ���� �޴��� 1�̶�� add_song�� ȣ���Ͽ� ���� �߰�
            add_song(songs, &count);
        }
        else if (choice == 2)
        { // ���� �޴��� 2��� update_song�� ȣ���Ͽ� ���� ����
            update_song(songs, count);
        }
        else if (choice == 3)
        { // ���� �޴��� 3�̶�� print_songs�� ȣ���Ͽ� ���� ���
            print_songs(songs, count);
        }
    }
    return 0;
}

int get_menu() {
    int choice;
    do {
        printf(QUERY_MENU);
        scanf(" %d", &choice);
    } while (choice < 0 || choice > 3);
    return choice;
}

int add_song(char songs[][SONG_LENGTH], int *count) {
    char buffer[SONG_LENGTH];
    if (*count == MAX_SONG) return 0;
    printf(QUERY_ADD);
    scanf(" %[^\n]%*c", buffer);
    strncpy(songs[(*count)++], buffer, SONG_LENGTH);
    return 1;
}

int update_song(char songs[][SONG_LENGTH], int count) {
    char old[SONG_LENGTH], new[SONG_LENGTH];
    printf(QUERY_FIND);
    scanf(" %[^\n]%*c", old);
    printf(QUERY_MOD);
    scanf(" %[^\n]%*c", new);
    int i = 0;
    for (; i < count; i++) {
        if (strcmp(old, songs[i]) == 0) {
            strncpy(songs[i], new, SONG_LENGTH);
            break;
        }
    }
    if (i == count) return 0;
    return 1;
}

void print_songs(const char songs[][SONG_LENGTH], int count) {
    printf("%s\n", RES_LIST);
    for (int i = 0; i < count; i++) {
        printf("%s\n", songs[i]);
    }
}
