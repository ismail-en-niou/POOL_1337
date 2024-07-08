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
	if (argc == 1)
	{
		ft_pustr(argv[0]);
		ft_pustr("\n");
	}
	return 0;
}