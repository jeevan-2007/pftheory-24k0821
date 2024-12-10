#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int validateEmail(char *email);
int main()
{
    char *mail;
    int size;
    printf("Enter size of the mail : ");
    scanf("%d", &size);
    mail = (char *)malloc((size + 1) * sizeof(char));
    if (mail == NULL)
    {
        printf("memory allocation failed");
        return 1;
    }
    printf("Enter your mail adress : ");
    scanf("%s", mail);
    if (validateEmail(mail))
    {
        printf("The email is valid ");
    }
    else
    {
        printf("EMail  is not valid");
    }
    free(mail);
    return 0;
}
int validateEmail(char *email)
{
    int valid = 0, count = 0, temp=-1;
    
    
        for (int i = 0; email[i]!='\0' ; i++)
        {
            if (email[i] == '@')
            {
                count++;
                temp = i;
            }
        }
        if (count == 1&& temp!=-1)
        {
            for (int i = temp + 1; email[i]!='\0'; i++)
            {
                if (email [i] == '.')
                {
                    valid = 1;
                    break;
                }
            }
            return valid;
        }
    }