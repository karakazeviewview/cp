#include <unistd.h>

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0' )
	{
		num++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	int	num;

	num = 1;
	while (num < argc)
	{
		write(1, argv[num], ft_strlen(argv[num]));
		write(1, "\n", 1);
		num++;
	}
}
