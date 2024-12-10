#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct string
{
    char str[20];
} string;
int input_pets(string **pets, int n)
{
        for (int i = 0; i < n; i++)
        {
            printf("Enter species, food, toys, bedding for pet %d", i + 1);
            for (int j = 0; j < 4; j++)
            {
                scanf("%s", pets[i][j].str);
            }
        }
        return n;
}
int add_pets(string ***pets, int n)
{   int a;
    printf("Enter number of species to add : ");
    scanf("%d", &a);
    *pets = realloc(pets, sizeof(string) * (n));
    for (int i = n; i < n + a; i++)
    {
        (*pets)[i] = malloc(sizeof(string) * 4);
        printf("Enter species, food, toys, bedding for new  pet %d : \n");
        for (int j = 0; j < 4; j++)
        {
            scanf("%s", (*pets)[i][j].str);
        }
    }
    return n+a;
}
int updating_supplies(string **pets, int n)
{
    int index;
    printf("Enter index of the species to update  : ");
    scanf("%d", &index);
    if (index<0 || index>=n){
        printf("Invalid number\n");
        return n;
    }
     printf("Enter new food, toys, bedding for species %d:\n", index);
    for (int j = 1; j < 4; j++)
    {
        scanf("%s", pets[index][j].str);
    }
    return n;
}
int remove_details(string ***pets, int n)
{
    int species_to_remove;
    printf("Enter the index of the species to remove (0 to %d): ", n - 1);
    scanf("%d", &species_to_remove);
    if (species_to_remove < 0 || species_to_remove >= n)
    {
        printf("Invalid index!\n");
        return n;
    }
    free((*pets)[species_to_remove]);
    for (int i = species_to_remove; i < n - 1; i++)
    {
        (*pets)[i] = (*pets)[i + 1];
    }
    *pets = realloc(*pets, (n - 1) * sizeof(string *));
    return n - 1;
}
void display_data(string **pets, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%s ", pets[i][j]);
        }
    }
}
int main()
{
    int n;
    printf("Enter number of species : ");
    scanf("%d", &n);
    string **pets = malloc(sizeof(string) * n);
    for(int i=0;i<n;i++){
        pets[i]=malloc(4*sizeof(string));
    }
    int choice;
    while (1){
    printf("\n1.Input pets\n2.Add pets\n3.Update supplies\n4.Remove data\n5.Display data\n6.Exit\nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        input_pets(pets, n);
        break;
    case 2:
        n = add_pets(&pets, n);
        break;
    case 3:
        updating_supplies(pets, n);
        break;
    case 4:
        n = remove_details(&pets, n);
        break;
    case 5:
        display_data(pets, n);
        break;
    case 6:
        for (int i = 0; i < n; i++)
        {
            free(pets[i]);
        }
        free(pets);
        printf("Exiting program.\n");
        return 0;
    default:
        printf("Invalid choice !!");
        break;
    }
}
}