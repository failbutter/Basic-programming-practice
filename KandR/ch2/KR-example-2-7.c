#include<ctype.h>
#include<stdio.h>
/*from book KR*/
int isdigital(char s)
{
  if((s>='0')&&(s<='9'))
    return 1;
  else
    return 0;
}
int atoi(char s[])
{
  int i,n;
  for( i=0;isspace(s[i]);i++);
  int sign = (s[i]=='-')?-1:1;
  if((s[i]=='+')||(s[i]=='-'))
    i++;
  for(n=0;isdigital(s[i]);i++)
    n=10*n+(s[i]-'0');
  return sign*n;
}

int main()
{
  printf("%i",atoi("   -12354  "));
  return 1;
}
