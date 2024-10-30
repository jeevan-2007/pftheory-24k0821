#include <stdio.h>
int main (){
    int arr[5],max=-33,s_max;
    for(int i=0;i<5;i++){
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
        if(arr[i]>9999){
            printf("invalid number ");
            i--;
        }

    }
    for(int i=0;i<5;i++){
        if(arr[i]>max)
        {
            s_max=max;
            max=arr[i];
        }
        else if (arr[i]>s_max)
        {
            s_max=arr[i];
        }
    }
    printf("s_max = %d",s_max);

}
