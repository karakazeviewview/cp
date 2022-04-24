#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*stout_string;

	stout_string = str;
	while (*stout_string != 0)
	{
		write(1, stout_string, 1);
		stout_string++;
	}
}
