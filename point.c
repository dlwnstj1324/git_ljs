#include <stdio.h>

int main(void){
  FILE *fp;
  int word_count;
  char result[10] = "hello\n";

  fp = fopen("test.txt", "w");
  word_count = fwrite(result, 1, 10, fp);

  printf("writeword: %d\n", word_count);
  fclose(fp);
}
