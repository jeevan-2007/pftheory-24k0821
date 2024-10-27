#include <stdio.h>

int main() {
   
    char arr[3][20]={"buy now","save big","limited offer"};
    for(int i=0;i<3;i++){
        printf("For %s : ",arr[i]);
        for(int j=0;arr[i][j]!='\0';j++){
             int count=1;
            if (arr[i][j]==' '||arr[i][j]=='.')continue;
        
            printf("'%c' :",arr[i][j]);    
            for(int k=j+1;arr[i][k]!='\0';k++){
                if(arr[i][j]==arr[i][k]){
                    count++;
                    arr[i][k]=' ';
                    printf("%c",arr[i][k]);
                }
                
            }
            printf("%d,",count);
            
        
        }
        printf("\n");
        
    }
    return 0;
}
