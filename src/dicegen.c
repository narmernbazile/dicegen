/*
 * diceware.c: a simple program to generate diceware style passphrases
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "wordlist.h"

int main(int argc, char* argv[]) {

  if (argc != 2) {
    fprintf(stderr, "invalid number of arguments\n");
    exit(1);
  }

  int num_words = atoi(argv[1]);
  if (num_words == 0) {
    fprintf(stderr, "invalid arugment");
    exit(1);
  }
  int result_len = 0;
  int keys[num_words];
  srand(time(0));
  int rnd = -1;
  for (int i = 0; i < num_words; i++) {
    rnd = (rand() % (parsed_txt_len - 0 + 1)) + 0;
    keys[i] = rnd;
    result_len += strlen(parsed_txt[rnd]);
  }

  char result[result_len + (num_words - 1)];
  strcpy(result, parsed_txt[keys[0]]);
  for (int i = 1; i < num_words; i++) {
    strcat(result, " ");
    strcat(result, parsed_txt[keys[i]]);
  }
  printf("%s\n", result);
}
