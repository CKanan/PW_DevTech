#include <stdio.h> 
#include <string.h> 
  
void isPalindrome(char str[]) {  
    int i = 0; 
    int j = strlen(str) - 1; 
    while (j > i) { 
        if (str[i++] != str[j--]) 
        { 
            printf("%s is Not Palindrome", str); 
            return; 
        } 
    } 
    printf("%s is palindrome", str); 
} 
 
int main() 
{ 
    isPalindrome("abababa"); 
    isPalindrome("kok"); 
    isPalindrome("kenan"); 
    return 0; 
}