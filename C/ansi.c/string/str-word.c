#include<stdio.h>
#include<string.h>


int main(){
    char str[]="hello I am Nitin Singh",temp[10][10],word[10][10];
    int x=0,y=0,z=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==32){
            z++;
            y=0;
            continue;
        }
        else{
        temp[z][y]=str[i];
        y++;
        }
    }
   
    for(int i=0;i<5;i++){
    printf("%s_",temp[i]);
    }
    return 0;
}