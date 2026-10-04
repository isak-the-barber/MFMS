#ifndef BUDGET_H 
#define BUDGET_H 
 
float calculateBudge(float revenue,float expenses); 
void enterDepartmentBudgets(float budgets[5],char names[20],int size); 
void enterExpenditures(float expenditures[],char names[20],int size); 
void desplayBudgetReport(float budgets[],float expenditures[],char names[20],int size);
#endif 