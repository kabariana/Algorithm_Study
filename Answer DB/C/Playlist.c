#include <stdio.h>
#include <string.h>

typedef enum { ballad, hiphop, pop, dance } genre;

char *genre_to_str[4] = {"ballad", "hip-hop", "pop", "dance"};

typedef struct {
  char title[51];
  char artist[31];
  genre genre;
  int length;
} song;

void add_song(song *array, int *count) {
  song new_song;
  scanf("%[^\n]s", new_song.title);
  scanf("%[^\n]s", new_song.artist);
  scanf("%d", &new_song.genre);
  scanf("%d", &new_song.length);
  array[(*count)++] = new_song;
}

void print_list(const song *array, int count) {
  for (genre genre = ballad; genre <= dance; genre++) {
    for (int i = 0; i < count; i++) {
      printf("%s %s %s %d\n", array[i].title, array[i].artist,
             genre_to_str[array[i].genre], array[i].length);
    }
  }
}

void search_song(const song *array, int count) {
  char key[50];
  scanf("%[^\n]s", key);
  for (int i = 0; i < count; i++) {
    if ((strstr(array[i].artist, key) != NULL) ||
        (strstr(array[i].title, key) != NULL))
      printf("%s %s %s %d\n", array[i].title, array[i].artist,
             genre_to_str[array[i].genre], array[i].length);
  }
}

int main() {
  song array[10];
  int count;
  return 0;
}
