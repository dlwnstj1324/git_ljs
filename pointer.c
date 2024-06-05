#include <stdio.h>

int main(void){
  FILE *fp;
  int word_count;
  char result[10] ={0};

  fp = fopen("test.txt", "r");
  word_count = fread(result, 1, 10, fp);

  printf("읽은 크기 : %d\n", word_count);
  printf("%s\n", result);
  fclose(fp);
}
