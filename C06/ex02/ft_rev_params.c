#include <unistd.h>
void ft_pustr(char *str)
{
	int     i;

	i = 0;
	while (str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}
int main(int argc , char *argv[])
{
    int     i;

    i = argc - 1;
	if (argc != 1)
	{
		while ( i > 0)
        {
            ft_pustr(argv[i]);
            ft_pustr("\n");
            i--;
        }
	}
	return 0;
}