

#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c",&ch);
  //printf("%d %d %d %d", 'a','z','A','Z');
  if (ch>='a' && ch<='z' || ch>='A' && ch<='Z') {
      printf("Its an alphabet.");
  }
  else{
      printf("It is not a alphabet.");
  }
  
  return 0;
}