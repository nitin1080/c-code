#include<stdio.h>
int main()
{
    int line=1,ch=1,arrl[20];
    char arr[100],chr;
    FILE *fptr=fopen(":D\\file.txt","w");
   
    printf("write in the file:");
    fgets(arr,100,stdin);
    fprintf(fptr,"%s",arr);
   rewind(fptr);
    chr=fgetc(fptr);
    while(chr!=EOF){
        ch++;
        if(chr='\n')
        line++;
        chr=fgetc(fptr);
    }
    printf("char=%d",ch);
    printf("\nline=%d",line);
    fclose(fptr);
return 0;
}   