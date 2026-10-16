#include <stdio.h>

int main(){
    
    double salary = 0.00;
    double housingAllowance = 0.00;
    double transportAllowance = 0.00;
    double taxAmount = 0.00;

    double grossSalary = 0.00;
    double netSalary = 0.00;

   
    printf("Enter salary: ");
    scanf("%lf", &salary);


    printf("Enter housing allowance:");
    scanf("%lf", &housingAllowance);



    printf("Transport Allowance:");
    scanf("%lf", &transportAllowance);

    printf("Enter Tax amount:");
    scanf("%lf", &taxAmount);


    grossSalary = salary + housingAllowance + transportAllowance;

 
    netSalary = grossSalary - taxAmount ;

    printf("\n Gross salary: %.2f", grossSalary);
    printf("\n Net Salary: %.2f", netSalary);

return 0;
}