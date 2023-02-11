#include<stdio.h>
int main()
{
    int b_salary[5], hour_rate, no_hour, i, basic_salary;
    for(i=0; i<5; i++)
    {
        printf("Enter hourly rate of employee:");
        scanf("%d",&hour_rate);
        printf("Enter number of hours:");
        scanf("%d",&no_hour);
        basic_salary = hour_rate * no_hour;
        printf("Basic salary of %d employee is:%d\n",i+1, basic_salary);
    }
    return 0;
}
