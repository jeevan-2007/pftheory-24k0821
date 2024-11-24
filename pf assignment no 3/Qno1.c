#include<stdio.h>
#include<string.h>
typedef struct emoloyee{
    int empl_no;
    char empl_name[50];
    int doj;
}empl;
void data(empl arr[],int i){
    printf("ENter no of employee : ");
    scanf("%d",&arr[i].empl_no);
    printf("Enter date of joining of the employee as (ddmmyy): ");
    scanf("%d",&arr[i].doj);
    printf("ENter name of the employee : ");
    scanf("%s",arr[i].empl_name);
}
int compare_dates(empl arr[]){
    int n,c=0;
    printf("Enter today's date as (ddmmyy): ");
    scanf("%d",&n);
    for(int i=0;i<4;i++){
    int diff=(n%100)-((arr[i].doj)%100);
    if(diff>3){
        printf("Name of Employee : %s\n",arr[i].empl_name);
        printf("Emloyee number   : %d\n",arr[i].empl_no);
        printf("Date of joining  : %d\n",arr[i].doj);
        c++;
    }
    }
    printf("Total count of employess is : %d",c);
}
int main (){
    empl arr[4];
    int count =0;
    int*c;
    c=&count;
    for(int i=0;i<4;i++){
        data(arr,i);
    }
    compare_dates(arr);
    
}
