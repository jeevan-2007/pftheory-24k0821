#include<stdio.h>
#include<stdlib.h>
typedef struct employee{
    int *ratings;
    int total_score;
}empl;
void displayPerformance(empl*ptr,int noe,int ev_p){
    for (int i=0;i<noe;i++){
        printf("For employee no %d : ",i+1);
        for(int j=0;j<ev_p;j++){
            printf("%d ",ptr[i].ratings[j]);
        }
        printf("\n");
    }
} 
int findEmployeeOfTheYear(empl*ptr,int noe,int ev_p){
        int max=-99,h_avg=-66,k;
        for (int i=0;i<noe;i++){
            int avg=0;
        for(int j=0;j<ev_p;j++){
            avg+=ptr[i].ratings[j];
        }
        avg=avg/ev_p;
        if(avg>h_avg){
            int temp=h_avg;
            h_avg=avg;
            k=i+1;
        }
    }
    return k;
}
int highest_avg(empl*ptr,int noe,int ev_p){
            int max=-99,h_avg=-66,k;
        for (int i=0;i<noe;i++){
            int avg=0;
        for(int j=0;j<ev_p;j++){
            avg+=ptr[i].ratings[j];
        }
        avg=avg/ev_p;
        if(avg>h_avg){
            int temp=h_avg;
            h_avg=avg;
            k=i;
        }
    }
    return h_avg;
}
int worst_employees(empl*ptr,int noe,int ev_p){
    int max=-99,l_avg=10000,k;
        for (int i=0;i<noe;i++){
            int avg=0;
        for(int j=0;j<ev_p;j++){
            avg+=ptr[i].ratings[j];
        }
        avg=avg/ev_p;
        if(avg<l_avg){
            int temp=l_avg;
            l_avg=avg;
            k=i+1;
        }
    }
    return k;
}
void input_vales(empl* ptr,int noe,int ev_p){
    for(int i=0;i<noe;i++){
    ptr[i].total_score=0;
    ptr[i].ratings=(int *)malloc(sizeof(int)*ev_p);
    for(int j=0;j<ev_p;j++){
      scanf("%d",&ptr[i].ratings[j])  ;
      ptr[i].total_score=ptr[i].total_score + ptr[i].ratings[j];
    }
}
}
int main(){
    int noe,ev_p;
    printf("Enter number of employees and evaluation periods : ");
    scanf("%d %d",&noe,&ev_p);
    empl *ptr=(empl *)malloc(sizeof(empl)*noe);
    input_vales(ptr,noe,ev_p);
    displayPerformance(ptr,noe,ev_p);
    printf("Highest performer of the year is : %d\n",findEmployeeOfTheYear(ptr,noe,ev_p));
    printf("Highest average among employees is : %d\n",highest_avg(ptr,noe,ev_p));
    printf("worst performer of the year is : %d\n",worst_employees(ptr,noe,ev_p));
    for (int i=0;i<noe;i++){
        free(ptr[i].ratings);
    }
    free(ptr);
}