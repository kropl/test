#include <cs50.h>
#include <stdio.h>

#include <string.h>
#include <ctype.h>

int main(void)
{
    
  string strName = " ";
  int d = 0;
//  printf("Enter your name: ");
  strName = GetString();
  printf("%c",toupper(strName[0]));
  for (d = 1; d < strlen(strName); d++)
    {
      if (strName[d] == ' ')  printf("%c", toupper(strName[d+1]));
    } 
   printf("\n"); 
}