#include<stdio.h>
int main(){
    int n,i,j;
    printf("Words kitnay likho ge : ");
    scanf("%d",&n);
    char arr[n][100];
    for(i=0;i<n;i++){
    printf("Enter word %d ",i+1);
    scanf("%s",&arr[i]);
    }
    printf("[");
    for(i=0;i<n;i++){
        for(j=0;arr[i][j]!='\0';j++){
            printf("%c",arr[i][j]);
            while(arr[i][j]==arr[i][j+1])
            {j++;}
        }
        printf(",");
    }
    printf("]");
}
