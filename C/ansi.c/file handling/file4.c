// reading from file
#include<stdio.h>
#include<stdlib.h>

int main(){
    char buf[50],ch;
    FILE *fptr=fopen("D:\\file.txt","r");
    if(fptr==NULL){
        printf("File path error!");
        exit(1);
    }
    ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}
// alternate of readinf file commond
// while(fscanf(fptr,"%s",buf)!=EOF)
// { printf("%s",buf)};

// alternate of readinf file commond
// while(fgets(buf,sizeof(buf),fptr)!=NULL){
// printf("%s",buf);}