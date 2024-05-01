// fuction of file handling
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch,s[20];
    FILE *fptr=fopen("D\\a.txt","w+");
    if(fptr==NULL){
        printf("File path error");
        exit(1);
    }
    
    printf("Enter the string:");
    fgets(s,sizeof(s),stdin);
    fprintf(fptr,"%s",s);

    // take the pointer at initial of file
    rewind(fptr);

    ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    
    // tell current position of pointer
    printf("%d",ftell(fptr));

    // take the pointer at specified position
    fseek(fptr,3L,SEEK_SET);
    fprintf(fptr,"Assam");

    fclose(fptr);
    
return 0;
}