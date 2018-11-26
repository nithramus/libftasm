#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int ft_puts(const char *s);
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
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_strdup(const char *s);
char *ft_cat(const int fd);
char *ft_strjoin(char const *str1, char const *str2);
char *ft_strchr(const char *str, int c);
int ft_putnbr(int n);
char *itoa(int n);
char **ft_strplit(char *s, int c);


void test_puts()
{
    ft_puts("ft_puts test");
    ft_puts("");
}

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
    memset(yolo2, 70, numtest);
    if (strncmp(yolo, yolo2, numtest) != 0)
        printf("ft_memset failed\n");
}

void test_memset()
{
    test_mem(1);
    test_mem(2);
    test_mem(100);
    test_mem(1000);
    test_mem(10000);
    test_mem(100000);
}

void basic_test_memcpy(int value)
{
    char *yolo = malloc(value);
    char *yolo2 = malloc(value);
    memset(yolo, 0, value);
    memset(yolo2, 'a', value);
    ft_memcpy(yolo, yolo2, value);
    if (strncmp(yolo, yolo2, value) != 0)
        printf("ft_memcpy failed\n");


}

void test_memcpy()
{
    basic_test_memcpy(1);
    basic_test_memcpy(20);
    basic_test_memcpy(200);
    basic_test_memcpy(3000);
    basic_test_memcpy(500000);
}

void basic_test_strdup(int value)
{
    char *yolo = malloc(value);
    memset(yolo, 0, value);
    memset(yolo, 'a', value - 1);
    char *yolo2 = ft_strdup(yolo);
    if (strcmp(yolo, yolo2) != 0)
        printf("ft_strdup failed\n");
}

void test_strdup()
{
    basic_test_strdup(1);
    basic_test_strdup(10);
    basic_test_strdup(100);
    basic_test_strdup(1000);
}

void test_cat()
{
    char buff[50];
    printf("test\n");
    int fd = open("test.c", O_RDWR);
    ft_cat(fd);
}

void	test_strjoin()
{
    char *yolo = "yolo";
    char *test = "swag\n";
    // write(1, "yolo\n", 5);

    char *final = ft_strjoin(yolo, test);
    if (strcmp(final, "yoloswag\n") != 0)
        printf("ft_strjoin failed");
}

void    test_strchr()
{
    char *chained = "abcdefghigklmnopqrstomnstadf";
    if (ft_strchr(chained, 'a') != strchr(chained, 'a'))
        printf("ft_strchr 0failed \n");
    if (ft_strchr(chained, 0) != strchr(chained, 0))
        printf("ft_strchr 1failed\n");
    if (ft_strchr(chained, 'f') != strchr(chained, 'f'))
        printf("ft_strchr 2failed\n");
    if (ft_strchr(chained, 'g') != strchr(chained, 'g'))
        printf("ft_strchr 3failed\n");
    if (ft_strchr(chained, 10) != strchr(chained, 10))
        printf("ft_strchr 4failed \n");

}

void test_putnbr()
{
    ft_putnbr(0);
    printf("\n");
    ft_putnbr(1);
    printf("\n");
    ft_putnbr(-1);
    printf("\n");
    ft_putnbr(-2147483648);
    printf("\n");
    ft_putnbr(2147483647);
    printf("\n");
    ft_putnbr(44650);
    printf("\n");
    ft_putnbr(-44650);
    printf("\n");
    ft_putnbr(12);
    printf("\n");
}

void test_itoa()
{
    if (strcmp(itoa(10), "10") != 0)
        printf("0itoa error");
    if (strcmp(itoa(0), "0") != 0)
        printf("1itoa error");
    if (strcmp(itoa(-1), "-1") != 0)
        printf("2itoa error");
    if (strcmp(itoa(2147483647), "2147483647") != 0)
        printf("3itoa error");
}

void test_strplit()
{
    char *test = malloc(400);
    strcpy(test, "weostrxdotyfrgyuiozefarezgv");
    char **yolo = ft_strplit(test, 'o');
    int i = 0;
    while (yolo[i])
    {
        puts(yolo[i]);
        i++;
    }
    char test2[] = "";
    yolo = ft_strplit(test2, 'o');
        i = 0;
    while (yolo[i])
    {
        puts(yolo[i]);
        i++;
    }
    char test3[] = "ezfrgtyu";
    yolo = ft_strplit(test3, 'o');

    i = 0;

    while (yolo[i])
    {
        puts(yolo[i]);
        i++;
    }
}

int main()
{
    printf("test ft_puts: \n");
    test_puts();
    printf("\nft_puts ok.\n\n");
    printf("test ft_bzero: \n");
    test_bzero();
    printf("\nft_bzero ok.\n\n");
    printf("test ft_strcat: \n");
    test_strcat();
    printf("\nft_strcat ok.\n\n");
    printf("test ft_isalpha: \n");
    test_isalpha();
    printf("\nft_isalpha ok.\n\n");
    printf("test ft_isdigit: \n");
    test_isdigit();
    printf("\nft_isdigit ok.\n\n");
    printf("test ft_isalnum: \n");
    test_isalnum();
    printf("\nft_isalnum ok.\n\n");
    printf("test ft_isascii: \n");
    test_isascii();
    printf("\nft_isascii ok.\n\n");
    printf("test ft_isprint: \n");
    test_isprint();
    printf("\nft_isprint ok.\n\n");
    printf("test ft_toupper: \n");
    test_toupper();
    printf("\nft_toupper ok.\n\n");
    printf("test ft_tolower: \n");
    test_tolower();
    printf("\nft_tolower ok.\n\n");
    printf("test ft_strlen: \n");
    test_strlen();
    printf("\nft_strlen ok.\n\n");
    printf("test ft_memset: \n");
    test_memset();
    printf("\nft_memset ok.\n\n");
    printf("test ft_memcpy: \n");
    test_memcpy();
    printf("\nft_memcpy ok.\n\n");
    printf("test ft_strdup: \n");
    test_strdup();
    printf("\nft_strdup ok.\n\n");
    printf("test ft_cat: \n");
    test_cat();
    printf("\nft_cat ok.\n\n");
    printf("test ft_nus: \n");
    // bonus
    printf("\nft_nus ok.\n\n");
    printf("test ft_strjoin: \n");
    test_strjoin();
    printf("\nft_strjoin ok.\n\n");
    printf("test ft_strchr: \n");
    test_strchr();
    printf("\nft_strchr ok.\n\n");
    printf("test ft_putnbr: \n");
    test_putnbr();
    printf("\nft_putnbr ok.\n\n");
    printf("test ft_itoa: \n");
    test_itoa();
    printf("\nft_itoa ok.\n\n");
    printf("test ft_strplit: \n");
    test_strplit();
    printf("\nft_strplit ok.\n\n");
    return 0;
}