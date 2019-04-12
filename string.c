#include<stdio.h>
#include <string.h>

int str_length(char* str){
return strlen(str);
}
void str_compare(char* str1,char* str2){
    int res=strcmp(str1,str2);
    if (res==0) 
        printf("Strings are equal"); 
    else 
        printf("Strings are unequal"); 
}

int main(int argc,char* argv[]){

char* str1,str2;
printf("Give two string: \n"); scanf("%s",str1);

return 0;
}
