#include <stdio.h>
#include <string.h>

#define SONG_LENGTH 40
#define MAX_SONG 20

#define QUERY_MENU "[ 0.종료 1.추가 2.수정 3.목록 ] 선택?"
#define QUERY_ADD "노래 제목? "
#define QUERY_FIND "찾을 노래 제목? "
#define QUERY_MOD "수정할 제목? "

#define ERR_NO_MORE "더이상 노래를 추가할 수 없습니다.\n"
#define ERR_NULL_CHAR "널 문자열은 노래 제목으로 사용할 수 없습니다.\n"
#define ERR_NOT_FOUND "노래를 찾을 수 없습니다.\n"

#define RES_LIST "<< 노래 목록 >>"

/**
* 메뉴를 출력하고 사용자로부터 메뉴 번호를 받아오는 함수
* @return 사용자가 선택한 메뉴의 번호
*/
int get_menu();

/**
* 사용자로부터 노래 제목을 받고 목록에 추가하는 함수
* @param songs 노래 목록을 저장해둔 배열
* @param count 현재까지 저장된 노래의 수
* @return 추가 성공 시 1, 실패 시 0
*/
int add_song(char songs[][SONG_LENGTH], int *count);

/**
* 사용자로부터 제목을 입력받고, 다른 제목으로 수정하는 함수
* @param songs 노래 목록을 저장해둔 배열
* @param count 현재까지 저장된 노래의 수
* @return 추가 성공 시 1, 실패 시 0
*/
int update_song(char songs[][SONG_LENGTH], int count);

/**
* 현재까지 저장된 노래 목록을 출력하는 함수
* @param songs 노래 목록을 저장해둔 배열
* @param count 현재까지 저장된 노래의 수
*/
void print_songs(const char songs[][SONG_LENGTH], int count);

int main(void)
{

    // 노래제목 배열 생성
    char songs[MAX_SONG][SONG_LENGTH];
    int count = 0;
    // 무한반복 시작
    while (1)
    {
        // 사용자로부터 메뉴를 받음
        int choice = get_menu();
        if (choice == 0)
        { // 만약 메뉴가 0이라면 반복 종료
            break;
        }
        else if (choice == 1)
        { // 만약 메뉴가 1이라면 add_song을 호출하여 제목 추가
            add_song(songs, &count);
        }
        else if (choice == 2)
        { // 만약 메뉴가 2라면 update_song을 호출하여 제목 수정
            update_song(songs, count);
        }
        else if (choice == 3)
        { // 만약 메뉴가 3이라면 print_songs를 호출하여 제목 출력
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
