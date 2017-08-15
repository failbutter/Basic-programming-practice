#include<stdio.h>
#include<ctype.h>
int main()
{
  char s;
  while((s=getchar())!=EOF)
    {
      //putchar(s+'A'-'a');
      putchar(tolower(s));
    }
  return 0;
}
