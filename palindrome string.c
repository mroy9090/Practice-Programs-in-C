#include <stdio.h>
#include <string.h>
#include<stdlib.h>

// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
    return;
}
  int main()
  {
      char str[200];
      printf("ENTER SENTENCE:\n");
      scanf("%[^\n]s",str);
      isPalindrome(str);
  }
