#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age <= 17)
    {
        printf("Hello!! Welcome to the show (^_^)");
    }
    else
    {
        printf("Sorry. It's only for kids (-_-)");
    }
}