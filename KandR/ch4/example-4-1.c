/*my analysis: first thing: whats the structure of data input?
               second thing : how to handle it?
               third thing: what's the structure of data output?
*/

/*about the second step: steps function and algorithms or new data structure*/

/*specifically, in this problem, steps:1.if its the end 2.if this line include "ould" 3.store this line*/

#include <stdio.h>
#include <string.h>
#define maxChar 70
int main()
{
   char inString[] = "Ah Love! could you and I with Fate conspire\nTo grasp this sorry Scheme of Things entire,\nWould not we shatter it to bits -- and then\nRe-mould it nearer to the Heart's Desire!";

   int position=0;
   int lenline=0;
   char line[maxChar];/*initialize array? to a given value?*/
   while(inString[position]!='\0')
     {
       
       for(int i=0;(inString[i+position]!='\n')&& (inString[i+position]!='\0');i++)
	 {
	   line[i]=inString[i+position];
	   lenline=i+1;
	 }
       printf("%i",position);
       printf("%i",lenline);
       line[lenline]='\0';
       
       if (1)
	 {
	   printf("%s\n",line);
	   }
       position=position+lenline+1;
       
     }
   /* printf("%u",sizeof(inString));*/
   /*printf(sizeof(inString));*/
   /*printf*/
   /* for(int i=0;inString[i]!='\0';i++)
    /*string or char: "\0" or '\0'*/
    /*\0 or EOF*/
   /* {
      putchar(inString[i]);
    }
   */
  return 0;
  

  /* int a = strlen("Ah Love! could you and I with Fate conspire\nTo grasp this sorry Scheme of Things entire,\nWould not we shatter it to bits -- and then\nRe-mould it nearer to the Heart's Desire!");
  char inString[a]="Ah Love! could you and I with Fate conspire\nTo grasp this sorry Scheme of Things entire,\nWould not we shatter it to bits -- and then\nRe-mould it nearer to the Heart's Desire!";
  for(int i=0;inString[i]!="\0";i++)
    {
      putchar(inString[i]);
    }
  return 0;
  */
  
}
    
  
