#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age[100],count=0;
    for (int i = 0; i < 100; i++)
    {
        age[i]=rand()%75+25;
        printf("%d\t",age[i]);
    }
    printf("\n\n");
    for (int j = 0; j < 100; j++)
    {
        if(age[j]<=60&&age[j]>=50)
        {
            count+=1;
        printf("%d\t",age[j]);
        continue;
        }
    }
    printf("\nnumber of people = %d\n",count);
return 0;
}