#include <stdio.h>
#include <stdlib.h>
typedef struct
{
  char name[10];
  int score[3];
} Node;
int f(char score)
{
  return score & 0xA5; -> 165
}
int main()
{
  Node *nodes = (Node *)malloc(2 * sizeof(Node));
  nodes[0] = (Node){"Kim", {0xF0, 0xF5, 0xDB}};
  nodes[1] = (Node){"Lee", {0xED, 0xD3, 0xF2}};
  int result = 0;
  for (int i = 0; i < 2; ++i)
  {
    result += f(nodes[i].score[0]);
    result += f(nodes[i].score[1]);
    result += f(nodes[i].score[2]);
  }
  printf("%d\n", result);
  free(nodes);
  return 0;
}

char *p = "KOREA"
printf("%s\n", p); -> "KOREA"
printf("%s\n", p + 3); -> "EA"
printf("%s\n", *p); -> "K"
printf("%s\n", *(p + 3)); -> "E"

