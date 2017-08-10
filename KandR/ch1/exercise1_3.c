#include <stdio.h>
int main()
{
  int Ftem=0;
  int Ctem=0;
  int step=20;
  int upper=300;
  while(Ftem<=upper){
    Ctem=(5/9.0)*(Ftem-32);
    printf("%d\t%d\n",Ftem,Ctem);
    Ftem=Ftem+step;
  }
  
  return 0;
}
