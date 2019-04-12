#include<stdio.h>
#include <string.h>

void str_length(char str[]){
    int length=0;
    for(int i=0;str[i] !='\0';i++)
        length++;
    printf("Its length: %d\n",length); 
}

int main(int argc,char* argv[]){
    char str1[1000];
    char str2[1000];
    printf("Give first string: \n"); 
    scanf("%s",str1);
    str_length(str1); 
    printf("Give second string: \n"); 
    scanf("%s",str2);
    str_length(str2);     
    return 0;
}
