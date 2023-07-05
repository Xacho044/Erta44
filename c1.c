#include <stdio.h>

int main()
{
   int mood = 0;
   char day = 0;
   printf("Welcome! \n");
   printf("write day e/h: ");
   scanf("%c",&day);
   printf("write your mood 1-good/2-bad: ");
   scanf("%i",&mood);


   switch (day)
   {    
	   case 'e' :
	   switch (mood)
	   {

          case 1: 
		  printf("erkushabti duq uneq lav tramadrutyun");
		  break;
		  case 2:
		  printf("erkushabti duq uneq vat tramadrutyun");
		  break;
		  default:
		  printf("no such mood");
		   }break;
      
	  case 'h':  
      switch (mood)
	   {

          case 1: 
		  printf("hingshabti duq uneq lav tramadrutyun");
		  break;
		  case 2:
		  printf("hingshabti duq uneq vat tramadrutyun");
		  break;
		  default:
		  printf("no such mood");
		   }break;
        default:
		printf("write erkushabti or hingshabti");

           

	   }




	}

