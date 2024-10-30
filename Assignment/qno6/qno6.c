#include<stdio.h>
int realitycheck(int n){
    int c=n/4,d=n%4;
    if(n<=4){
    printf("To win 100% : ");
   return n;}
    else if(n==5){
    return -1;}
    if(d!=0) {printf("you can possibly win if you pick :");return d-1;}
    if(c%2==1)
    {printf("you can possibly win if you pick :" );
    return d;}
    else if(c%2==0)
    {printf("you can possibly win if you pick :");
    return d+1;}
}
int main(){
    int n;
    printf("enter number of matcksticks on the table : ");
    scanf("%d",&n);
   int a= realitycheck(n);
   printf("%d",a);
}
