#include <stdio.h>
#include <math.h>
#include <string.h>
int dectobin(int a)
{
    int mod[32];
    int i = 0;
    while (a > 0)
    {
        mod[i] = a % 2;
        a = a / 2;
        i++;
    }
    for (int k = i - 1; k >= 0; k--)
    {
        printf("%d", mod[k]);
    }
}

int bintodes(int a)
{
    int base = 1, rem;
    int bintodes = 0;
    int i = 0;
    while (a != 0)
    {
        rem = a % 10;
        a = a / 10;
        bintodes += rem * base;
        base = base * 2;
    }
    printf("%d", bintodes);
}
void DecimalToHexadecimal(int a)
{
    char hexa[100];
    int temp;
    int i = 1;
    while (a != 0)
    {
        temp = a % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa[i++] = temp;
        a = a / 16;
        i++;
    }
    for (int k = i - 1; k > 0; k--)
    {
        printf("%c", hexa[k]);
    }
}
int HexadecimalToDecimal(char a[10])
{
    int temp,dec=0,i,mod,cnt=0;
    for (i = (strlen(a) - 1); i >= 0; i--){
        if(a[i]>64&&a[i]<=70){
            temp=a[i]-55;
        }
        else temp=a[i]- 0x30;
        mod=a[i]%10;
        dec=dec+temp*pow((double)16,(double)cnt);
        cnt++;
    }
    printf("%d",dec);
}
void BinaryToHexadecimal(int a){
    
    int base = 1, rem;
    int bintodes = 0;
    int i = 0;
    while (a != 0)
    {
        rem = a % 10;
        a = a / 10;
        bintodes += rem * base;
        base = base * 2;
    }
    a=bintodes;
    char hexa[100];
    int temp;
    i = 1;
    while (a != 0)
    {
        temp = a % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa[i++] = temp;
        a = a / 16;
        
    }
    for (int k = i - 1; k > 0; k--)
    { printf("%c", hexa[k]);
    }
    
}
int HexadecimalToBinary(char *a){
    int temp,dec=0,mod,cnt=0,d=strlen(a);
    for (int i = d - 1; i >= 0; i--){
        if(a[i]>64&&a[i]<=70){
            temp=a[i]-55;
        }
        else temp=a[i]- 0x30;
        mod=a[i]%10;
        dec=dec+temp*pow((double)16,(double)cnt);
        cnt++;
    }
    int  c=dec;
    int rem[32];
    int i = 0;
    while (c > 0)
    {
        rem[i] = c % 2;
        c = c / 2;
        i++;
    }
    for (int k = i - 1; k >= 0; k--)
    {
        printf("%d", rem[k]);
    }
    }
int main()
{
    int a,c,n;
    printf("selesct from the following :\n 1.Decimal to binary\n 2.Binary to decimal\n 3.Decimal to hexadecimal\n 4.Hexadecimal to decimal \n 5.Binary to hexadecimal\n 6.hexadecimal to Binary\n");
    scanf("%d",&n);
    if(n==1){
        printf(" Enter a number to convert : ");
        scanf("%d",&a);
        dectobin(a);
    }
    if(n==2){
        printf(" Enter a number to convert : ");
        scanf("%d",&a);
        bintodes(a);
    }
    if(n==3){
        printf(" Enter a number to convert : ");
        scanf("%d",&a);
        DecimalToHexadecimal(a);
    }
    if(n==4){
        char s[32];
        printf(" Enter a number to convert : ");
        scanf("%s",s[32]);
        HexadecimalToDecimal(a);
    }
    if(n==5){
        printf(" Enter a number to convert : ");
        scanf("%d",&a);
        BinaryToHexadecimal(a);
    }
    if(n==6){
        char s[32];
        printf(" Enter a number to convert : ");
        scanf(" %s",s);
        HexadecimalToBinary(s);
    }
    return 0;
}
