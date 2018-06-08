#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n);
void ft_strcat(char *dest, char *src);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);

void test_bzero()
{
    char test[6];
    strcpy(test, "test\n");
    ft_bzero(test, strlen(test));
    write(1,test, 5);
}

void test_strcat()
{
    char *yolo = malloc(20);
    strcpy(yolo, "test1");
    ft_strcat(yolo, "test2");
    printf("%s\n", yolo);
}

void test_isalpha()
{
    if (ft_isalpha('a') != 1)
        printf("ft_alpha 0failed\n");
    if (ft_isalpha('A') != 1)
        printf("ft_alpha 1failed\n");

    if (ft_isalpha('z') != 1)
        printf("ft_alpha 2failed\n");
    if (ft_isalpha('Z') != 1)
        printf("ft_alpha 3failed\n");
    if (ft_isalpha('1') != 0)
        printf("ft_alpha 4failed\n");
    if (ft_isalpha(10) != 0)
        printf("ft_alpha 5failed\n");
}

void test_isdigit()
{
    if (ft_isdigit('a') == 1)
        printf("ft_isdigit 6failed\n");
    if (ft_isdigit('0') == 0)
        printf("ft_isdigit 7failed\n");
    if (ft_isdigit('5') == 0)
        printf("ft_isdigit 8failed\n");
    if (ft_isdigit('9') == 0)
        printf("ft_isdigit 9failed\n");
   if (ft_isdigit(' ') == 1)
        printf("ft_isdigit 10failed\n");
}

void test_isalnum()
{
    if (ft_isalnum('a') == 0)
        printf("ft_alpha 11failed\n");
    if (ft_isalnum('A') == 0)
        printf("ft_alpha 12failed\n");
    if (ft_isalnum('z') == 0)
        printf("ft_alpha 13failed\n");
    if (ft_isalnum('Z') == 0)
        printf("ft_alpha 14failed\n");
    if (ft_isalnum('a') == 0)
        printf("ft_isdigit 15failed\n");
    if (ft_isalnum('0') == 0)
        printf("ft_isdigit 16failed\n");
    if (ft_isalnum('5') == 0)
        printf("ft_isdigit 17failed\n");
    if (ft_isalnum('9') == 0)
        printf("ft_isdigit 18failed\n");
    if (ft_isalnum(' ') == 1)
        printf("ft_isdigit 19failed\n");
    if (ft_isalnum(9) == 1)
        printf("ft_isdigit 20failed\n");
}

int main()
{
    test_bzero();
    test_strcat();
    test_isalpha();
    test_isdigit();
    test_isalnum();
    return 0;
}