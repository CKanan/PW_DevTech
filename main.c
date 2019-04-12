#include<stdio.h>
#include <string.h>
#include"string_length.h"
#include"string_compare.h"
#include"string_palindrome.h"

int main(){
char str1[1000];
    char str2[1000];
    printf("Give first string: \n"); 
    scanf("%s",str1);
    str_length(str1); 
    printf("Give second string: \n"); 
    scanf("%s",str2);
    str_length(str2);  
    if(str_compare(str1,str2)==0) printf("Strings is equal\n");
    else printf("Strings not equal\n");

    isPalindrome(str1); 
    isPalindrome(str2); 
}