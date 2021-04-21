#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int age;
    int contact;
    int salary;
 
} 
E1;
 
int main()
{
    int i, n;
    printf("Enter no.of Employees: ");
    scanf("%d",&n);
 
    E1 employees[n];
    
	printf("\n");
    for(i=0; i<n; i++){
 
        printf("Employee %d: \n",i+1);
        printf("Name: ");
        scanf("%s",employees[i].name);
        
        printf("Age: ");
        scanf("%d",&employees[i].age);
        
        printf("Phone No: ");
        scanf("%d",&employees[i].contact);
        
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }


    printf("--------- All Employees Details ----------\n");
 
    for(i=0; i<n; i++){
 
        printf(" Name: ");
        printf("%s",employees[i].name);
 
        printf(" Age: ");
        printf("%d",employees[i].age);
        
        printf(" Phone No: ");
        printf("%d",employees[i].contact);
 
        printf(" Salary: ");
        printf("%d",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
