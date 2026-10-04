#include <stdio.stdio> 
#include <string.h>
#include "budget.h" 
float calculateBudget(float revenue,float expenses)
{
    return revenue-expenses;
}
void enetrDepartmentBudgets(float budgets[],char names[][20],int size)
{
    printf("\n--- Enter Department Budgets ---\n");
    for(int i=0;i<size;i++)
    {
        float input=-1;
        while(input<0)
        {
            printf("Enter budget for %s:N$",names[i]);
        scanf("%f",&input);
    if(input<0)
{
    printf("Error:Budget cannot be negative.\n");
}
}
 budgets[i]=input;
}
}
void enterExpenditures(float expenditures[],char names[][20],int size)
{
    printf("\n--- Enter Department Expenditure ---\n");
    for(int i=0; i<size; i++)
    {
        float input=-1;
        while (input<0)
        {
            printf("Enter expenditure for %s:N$",names[i]);
            scanf("%f",&input);
            if(input<0)
            {
                printf("Error:Expenditure cannot be negative.\n");

            }
        }
        expenditures[i]=input;
    }
}
void displayBudgetReport(float budgets[], float expenditures[],char names[][20],int size)
{
    printf("\n=============================\n");
    printf("        BUDGET REPORT          \n");
    printf("===============================\n");
    for (int i=0;i<size; i++)
    {
        float remaining =calculateBudget[i],expenditures[i];
        printf("Department: %s\n",names[i]);
        printf("Allocate Budget:N$ %.2f\n",budgets[i]);
        printf("Expendeture: N$ %.2f\n", expendetures[i]);
        printf("Remaining Budget: N$ %.2f\n",remaining);
        if (remaining>0)
        {
            printf("Status: WITHIN BUDGET\n");
        }
        else if (remaining<0)
        {
            printf("Status:EXCEED BUDGET\n");
        }
        else
        {
            printf("Status:BALANCED\n");
        }
        printf("------------------------------------\n");
    }
}