#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i ;
    
    while(str[i])
        i++;
    return (i);
}

int ft_strstr(char *str , char *to_find , int *count)
{
    int i;
    int j;
    int count;

    i=0;
    j=0;
    count = 0;
    if (to_find == '\0')
        return (0);
    while (str[i])
    {
        j = 0;
        while(str[i] == to_find[j] && str[i])
        {
            if(to_find[j+1] == '\0')
            {
                *count++;
            }
            i++;
            j++;
        }
        i++;
    }
    return () ;
}
int main ()
{
    char hadi[] = "slm waxe a satte slm a khona slm";
    char sep[] = "slm";
    printf("%d",ft_strstr(hadi,sep));
    return 0;
}