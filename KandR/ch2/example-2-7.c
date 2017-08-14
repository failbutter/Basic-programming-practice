/*example 2-7*/
/*43 45 48-57*/
#include <string.h>
#include <stdio.h>
int isdigital(char s)
{
  if((s>='0')&&(s<='9'))
    return 1;
  else
    return 0;
}
int isplus(char s)
{
  if(s=='+')
    return 1;
  else
    return 0;
}
int isminus(char s)
{
  if(s=='-')
    return 1;
  else
    return 0;
}
int getplus(char s[])
{
  /*
  int j=0;
  int sum =0;
  char stemp[20];
  stemp[0]='0';
  int i=0;
  while(isdigital(s[i]))
    {
      stemp[i]=s[i];
      j=i;
      i++
    }
  for(int m=0;m<=j;m++)
    {
      sum=10*sum+(stemp[i]-'0');
    }
  */
  int sum=0;
  for(int i=0;isdigital(s[i]);i++)
    {
      sum=10*sum+(s[i]-'0');
    }
  return sum;

  
}
int atoi(char s[])
{
  int out;
  int position;
  for(int i=0; i<strlen(s); i++)
    {
      /*
      if((s[i]==43)||(s[i]==45)||((48<=s[i])&&(s[i]<=57)))
	{
	}
      */
      
      if(isplus(s[i]))
	{
	  return getplus(&s[i+1]);
	}
      if(isdigital(s[i]))
	{
	  return getplus(&s[i]);
	}
      if(isminus(s[i]))
	{
	  int j= getplus(&s[i+1]);
	  return -j;
	}
    }
}

int main()
{
  printf("%i", atoi("we  -123 3e "));
  return 0;
}
