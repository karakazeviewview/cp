#include <unistd.h>

void	ft_put(char *str);

int	main(int argc, char **argv)
{
	if (argc > 0)
		ft_put(argv[0]);
	write(1, "\n", 1);
}

void	ft_put(char *str)
{
	while (*str)
		write(1, str++, 1);
}
