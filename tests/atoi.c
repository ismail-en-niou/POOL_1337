#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}

int ft_atoi(char *str)
{
     int i ;
     int signe = 1 ;
     int  res = 0 ;
    i = 0 ;
    while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\n')) // kaydoze 3la les espaces 
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            signe = -signe;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9') // hadi kat7awel ar9ame mn char le int 
    {
        res = res * 10 ;
        res = res + (str[i] - '0');
        i++;
    }
    return (res * signe);
}

int  main ()
{
    printf("%d",ft_atoi("2147483648"));
    return (0);
}
