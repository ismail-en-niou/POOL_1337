#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int check_separator(char c , char *charest)
{
    int i ;

    i = 0;
    while (charest[i])
    {
        if(c == charest[i])
            return 1;
        i++;
    }
    return (0);
}

int ft_strlen_word(char *str ,char *sep)
{
    int i;

    i = 0;
    while(str[i] && check_separator(str[i] , sep))
        i++;
    return (i);
}

int count_word(char *str , char *sep)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i])
    {
        while(str[i] && check_separator(str[i] , sep))
            i++;
        if(str[i])
            count++;
        i++;
    }
    return (count);
}

char	*ft_strcpy(char *dest, char *src, char *sep)
{
	int	i;

	i = 0 ;
	while (src[i] && !check_separator(src[i], sep))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char **ft_split(char *str , char *charest)
{
    int i = 0;
    int j = 0;
    char **res;
    
    res = malloc((count_word(str,charest) + 1) * sizeof(char *));
    if(!res)
        return (NULL);
    while(i < count_word(str,charest))
    {
        while (str[i] && check_separator(str[i],charest))
            i++;
        if (str[i])
        {
            res[j] = malloc ((ft_strlen_word(&str[i],charest) + 1) * sizeof(char));
            ft_strcpy(res[j],&str[i],charest);
            j++;
            while (str[i] && !check_separator(str[i] ,charest))
                i++;
        }
        res[i] = NULL ;
    }
    return (res);

}

#include <stdio.h>

int main() {
    char str[] = "Hello world, this is an example";
    char delimiter[] = " ";
    char **result = ft_split(str, delimiter);

    if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Token %d: %s\n", i, result[i]);
            free(result[i]);
        }
        free(result);
    }

    return 0;
}
