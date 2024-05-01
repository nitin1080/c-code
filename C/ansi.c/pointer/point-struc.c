#include<stdio.h>

struct students
{
    int roll_no;
    char names[20];
    float cgpa;
};

int main()
{
    struct students st[3],*s;
    s=&st;
    printf("Enter the details of three students:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d%s%f",&(*(s+i)).roll_no,(*(s+i)).names,&(*(s+i)).cgpa);
    }

    printf("\n");
    printf("roll no. students is:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t%s\t%f\n",(*(s+i)).roll_no,(*(s+i)).names,(*(s+i)).cgpa);
    }   
return 0;
}