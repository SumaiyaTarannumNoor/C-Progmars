#include <stdio.h>
#include <stdlib.h>

int main()
{
   char word;

   printf("Do you want to shutdown your computer now (yes/no)\n");
   scanf("%c", &word);

   if (word == 'yes' || word == 'YES' || word== 'Yes' )

   {
       system("shutdown -s");
       system("pause");
   }
   return 0;
}
