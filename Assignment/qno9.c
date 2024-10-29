#include<stdio.h>
int main(){
	int i,j,k;
	
    char grid[5][5] = {
{' ', ' ', 'I', 'X', ' '},
{' ', 'X', ' ', ' ', ' '},
{'I', ' ', 'X', 'X', ' '},
{' ', ' ', ' ', 'I', 'X'},
{' ', 'X', ' ', ' ', 'P'}
};
    
    char move;
    printf("Enter 'W' for up 'A' for left 'S' for down 'D' for right 'Q' to End \n");
    do{
    for( i=0;i<5;i++){
        for( j=0;j<5;j++){
            printf(" %c |",grid[i][j]);
        }
        printf("\n-----------------\n");
    }
    printf("\nEnter your move : \n");
    scanf(" %c",&move);
    int a,b,score=0;
    //loop to find position of pq
     for( i=0;i<5;i++){
        for( j=0;j<5;j++){
            if(grid[i][j]=='P')
            {
                a=i,b=j;
            }
        }
    }
    //conditions to move player 
    if(move=='W'||move=='w'){
        if(grid[a-1][b]=='X'||(a==0))printf("\nInvalid move\n ");
        else if(grid[a-1][b]=='I'){
            int temp;
            score++;
            temp=grid[a-1][b];
            grid[a-1][b]=grid[a][b];
            grid[a][b]=' ';
            
        }
            else if (grid[a-1][b]==' '){
            int temp;
            temp=grid[a-1][b];
            grid[a-1][b]=grid[a][b];
            grid[a][b]=' ';
        }
        
        
    }
      if(move=='A'||move=='a'){
        if(grid[a][b-1]=='X'||(b==0))printf("\nInvalid move\n ");
        else if(grid[a][b-1]=='I'){
            int temp;
            score++;
            temp=grid[a][b-1];
            grid[a][b-1]=grid[a][b];
            grid[a][b]=' ';
        }   
            else if (grid[a][b-1]==' '){
            int temp;
            temp=grid[a][b-1];
            grid[a][b-1]=grid[a][b];
            grid[a][b]=' ';
        }
        
    }
      if(move=='d'||move=='D'){
        if(grid[a][b+1]=='X'||(b==4))printf("\nInvalid move\n ");
        else if(grid[a][b+1]=='I'){
            int temp;
            score++;
            temp=grid[a][b+1];
            grid[a][b+1]=grid[a][b];
            grid[a][b]=' ';
        }
        else if (grid[a][b+1]==' '){
            int temp;
            temp=grid[a][b+1];
            grid[a][b+1]=grid[a][b];
            grid[a][b]=' ';
        }
        
    }
      if(move=='S'||move=='s'){
        if(grid[a+1][b]=='X'||(a==4))printf("\nInvalid move\n ");
        else if(grid[a+1][b]=='I'){
            int temp;
            score++;
            temp=grid[a+1][b];
            grid[a+1][b]=grid[a][b];
            grid[a][b]=' ';           
        }
            else if (grid[a+1][b]==' '){
            int temp;
            temp=grid[a+1][b];
            grid[a+1][b]=grid[a][b];
            grid[a][b]=' ';
        }
    }
    if(move=='q') break;
}while (move!='Q'||move!='q');
        printf("======= The game has ended ========\n");
    
return 0;
}
