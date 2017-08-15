#include<ctype.h>
#include<stdio.h>

//double int
//s[i]-'0'
//
int isdigital(char s)
{
  if((s>='0')&&(s<='9'))
    return 1;
  else
    return 0;
}
int isdot(char s)
{
  if (s=='.')
    return 1;
  else
    return 0;
}
double atof(char s[])
{
  int i;
  double n;
  double m=0;
  double p=1;
  for(i=0; isspace(s[i]); i++)
    ;
  int sign = (s[i]=='-')?-1:1;
  if((s[i]=='+')||(s[i]=='-'))
    i++;
  for(n=0; isdigital(s[i]);i++)
    {
      n=10*n+(s[i]-'0');
    }
  if(isdot(s[i]))
    {
      for(i=i+1;isdigital(s[i]);i++)
	{
	  m=10*m+(s[i]-'0');
	  p=p*10.0;
         
	}
    }
  return sign*(n+m/p);
}

int main()
{
  printf("%f", atof("   -12.23  ewr3"));
  return 0;
}

