#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int arr[2][3] = {1,2,3,4,5,6}; // 
  int (*p)[3] = NULL;  // p = {1,2,3,4,5,6}
  p = arr;

  printf("%d, ", *(p[0]+1) + *(p[1]+2)); // 2 + 6 = 5
  printf("%d", *(*(p+1)+0) + *(*(p+1)+1)); // 4 + 5 = 9
  return 0;
}