#include <stdio.h>
#include <string.h>

int main(void){
  char str[50] = "nation";
  char *p2 = "alter"; // alter 문자열이 저장된 곳의 주소를 저장

  strcat(str, p2);

  printf("%s", str);

  return 0;
}