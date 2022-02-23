#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"


int main()
{
    // ft_putchar('b');
    // ft_print_alphabet();
    // ft_print_reverse_alphabet();
    // ft_print_numbers();
    // ft_is_negative(5);
    //ft_print_comb();
    //ft_print_comb2();
    //ft_putnbr(316195);
    //ft_print_combn(2);
    test();
    

    return 0;
}

//---------------------------------------------------

void ft_putchar(char c)
{
    write(1, &c, 1);
}

//---------------------------------------------------

void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

//---------------------------------------------------

void ft_print_reverse_alphabet(void)
{
    write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

//---------------------------------------------------

void ft_print_numbers(void)
{
    write(1, "0123456789", 10);
}

//---------------------------------------------------

void ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else if (n >= 0)
        write(1, "P", 1);
}

//---------------------------------------------------

void ft_print_comb(void)
{
    int a = 0, b = 0, c = 0;

    while(a < 10)
    {
        b = a + 1;
        while(b < 10)
        {
            c = b + 1;
            while(c < 10)
            {
                affichage(a, b, c);
                c++;
            }
        b++;
        }
    a++;
    }
}

void affichage(int a, int b, int c)
{
    char cha, chb, chc, z;

    cha = a + 48;
    chb = b + 48;
    chc = c + 48;
    z = '\n';

    write(1, &cha, 1);
    write(1, &chb, 1);
    write(1, &chc, 1);
    write(1, &z, 1);
}

//---------------------------------------------------

void ft_print_comb2(void)
{
    int a = 0, b = 0;

    while (a < 99)
    {
        b = a + 1;
        while (b < 100)
        {
            ft_affichage(a, b);
            b++;
        }
        a++;
    }
}

void ft_affichage(int a, int b)
{
    ft_putchar(48 + a/10);
    ft_putchar(48 + (a - (a/10)*10));
    ft_putchar(' ');
    ft_putchar(48 + b/10);
    ft_putchar(48 + (b - (b/10)*10));
    
    if (a != 98 || b != 99)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
    
}

//---------------------------------------------------

void ft_putnbr(int nb)
{
    //if(nb < 2147483648 && nb > -2147483649)
 
} 

//---------------------------------------------------

void ft_print_combn(int n)
{
    int a = 0, b = 0, c = 0;
    
    if (n > 10 || n < 0)
        write(1, "ERREUR", 6);

    
    while(a < 10)
    {
        b = a + 1;
        while(b < 10)
        {
            printf("%d%d, ", a, b);
            b++;
        }
    a++;
    }

}

//---------------------------------------------------

void test(void)
{
    int a = 0, b = 0;

    while (a < 99)
    {
        while (b < 100)
        {
            printf("%d et %d\n", a, b);
            b++;
            if ( b == 10)
                a++;
        }
        a++;
    }
}