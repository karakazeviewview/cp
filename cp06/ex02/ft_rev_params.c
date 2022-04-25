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
	while (1 < argc)
	{
		write(1, argv[argc - 1], ft_strlen(argv[argc - 1]));
		write(1, "\n", 1);
		argc--;
	}
}
