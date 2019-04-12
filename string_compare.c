
int str_compare(char str1[],char str2[]){
    for(int i=0;str1[i]!='\0';i++){
        for(int j=0;str2[j]!='\0';j++)
            if(str1[i]==str2[j])
                return 0;
            else return 1;
    }         
}