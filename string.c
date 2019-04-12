#include<stdio.h>
#include <string.h>

void str_length(char str[]){
int length=0;
for(int i=0;str[i] !='\0';i++)
    length++;
printf("Its length: %d\n",length); 
}
int str_compare(char str1[],char str2[]){
    for(int i=0;str1[i]!='\0';i++){
        for(int j=0;str2[j]!='\0';j++)
            if(str1[i]==str2[j])
                return 0;
            else return 1;
    }         
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
    if(str_compare(str1,str2)==0) printf("Strings is equal\n");
    else printf("Strings not equal\n");
    
    return 0;
}
