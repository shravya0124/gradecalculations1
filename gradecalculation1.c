#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<50)
    {
        printf("Grade F");
    }
    else if(marks>=54 && marks=<40)
    {
        printf("Grade D");
    }
    else if(marks>=69 && marks=<55)
    {
        printf("Grade C");
    }
    else if(marks>=70 && marks=<84)
    {
        printf("Grade B");
    }
    else if(marks>=85 && marks=<100)
    {
        printf("Grade A");
    }
}
