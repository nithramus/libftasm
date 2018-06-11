#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n);
void ft_strcat(char *dest, char *src);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);


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

void test_isascii()
{
    if (ft_isascii(-1) == 1)
        printf("ft_isascii 21failed\n");
    if (ft_isascii(128) == 1)
        printf("ft_isascii 22failed\n");
    if (ft_isascii(0) != 1)
        printf("ft_isascii 23failed\n");
    if (ft_isascii(127) != 1)
        printf("ft_isascii 24failed\n");
    if (ft_isascii(50) != 1)
        printf("ft_isascii 25failed\n");
}

void test_isprint()
{
    if (ft_isprint(-1) == 1)
        printf("ft_isprint 26failed\n");
    if (ft_isprint(128) == 1)
        printf("ft_isprint 27failed\n");
    if (ft_isprint(0) == 1)
        printf("ft_isprint 28failed\n");
    if (ft_isprint(127) == 1)
        printf("ft_isprint 29failed\n");
    if (ft_isprint(50) != 1)
        printf("ft_isprint 30failed\n");
}

void test_toupper()
{
    if (ft_toupper('a') != 'A')
        printf("ft_toupper 31failed\n");
    if (ft_toupper('A') != 'A')
        printf("ft_toupper 32failed\n");
    if (ft_toupper('z') != 'Z')
        printf("ft_toupper 33failed\n");
    if (ft_toupper('Z') != 'Z')
        printf("ft_toupper 34failed\n");
    if (ft_toupper('f') != 'F')
        printf("ft_toupper 35failed\n");
    if (ft_toupper('F') != 'F')
        printf("ft_toupper 36failed\n");
    if (ft_toupper('1') != '1')
        printf("ft_toupper 37failed\n");
    if (ft_toupper(0) != 0)
        printf("ft_toupper 38failed\n");
}

void test_tolower()
{
    if (ft_tolower('A') != 'a')
        printf("ft_tolower 39failed\n");
    if (ft_tolower('a') != 'a')
        printf("ft_tolower 40failed\n");
    if (ft_tolower('Z') != 'z')
        printf("ft_tolower 41failed\n");
    if (ft_tolower('z') != 'z')
        printf("ft_tolower 42failed\n");
    if (ft_tolower('F') != 'f')
        printf("ft_tolower 43failed\n");
    if (ft_tolower('f') != 'f')
        printf("ft_tolower 44failed\n");
    if (ft_tolower('1') != '1')
        printf("ft_tolower 45failed\n");
    if (ft_tolower(0) != 0)
        printf("ft_tolower 46failed\n");
}

void    test_strlen()
{
    if (ft_strlen("yolo") != 4)
        printf("ft_stren 47failed\n");
    if (ft_strlen("") != 0)
        printf("ft_stren 48failed\n");
    if (ft_strlen("1") != 1)
        printf("ft_stren 49failed\n");
    if (ft_strlen("yoloyoloyoloyoloyolo") != 20)
        printf("ft_stren 50failed\n");
    if (ft_strlen("yoloyolo20") != 10)
        printf("ft_stren 51failed\n");
}

void test_mem(int numtest)
{
    char *yolo = malloc(numtest);
    char *yolo2 = malloc(numtest);
    ft_memset(yolo, 70, numtest);
    memset(yolo, 70, numtest);
    if (strcmp(yolo, yolo2) != 0)
        printf("ft_memset 52failed\n");
}

void test_memset(void *s, int c, size_t n)
{
    test_mem(1);
    test_mem(2);
    test_mem(100);
    test_mem(1000);
    test_mem(10000);
    test_mem(100000);

}


int main()
{
    test_bzero();
    test_strcat();
    test_isalpha();
    test_isdigit();
    test_isalnum();
    test_isascii();
    test_isprint();
    test_toupper();
    test_tolower();
    test_strlen();
    test_memset();
    return 0;
}