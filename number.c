#include <stdio.h>
int main(void){
  int k, i, j;
  printf("정수를 입력하시오 : ");
  scanf("%d", &k);
  for(i=0; i<k; i++){
    for(j=0; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
}
