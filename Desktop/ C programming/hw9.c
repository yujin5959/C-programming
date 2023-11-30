#include <stdio.h>

void convCase(char str[])
{
   const int diff = 'a' - 'A';
   int i = 0;

   while (str[i] != '\0')
   {
      if (str[i] >= 'A' && str[i] <= 'Z')
         str[i] = str[i] + diff;
      else if (str[i] >= 'a' && str[i] <= 'z')
         str[i] = str[i] - diff;
      i++;
   }
}

int main(void)
{
   char str[100];

   printf("Inout> ");
   fgets(str, sizeof(str), stdin);

   convCase(str);
   printf("Output> %s\n", str);

   return 0;
}
