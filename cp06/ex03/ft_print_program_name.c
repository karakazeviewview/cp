#include <unistd.h>
#include <stdbool.h>
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		 if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*n;

	n = *a;
	*a = *b;
	*b = n;
}

void	ft_sort(char *argv[], int argc)
{
	int		num;
	int		flag;

	while (true)
	{
		flag = 0;
		num = 1;
		while (num < argc - 1)
		{
			if (ft_strcmp(argv[num], argv[num + 1]) > 0)
			{
				ft_swap(&argv[num + 1], &argv[num]);
				flag = 1;
			}
			num++;
		}
		if (!flag)
			break ;
	}
}

int	main(int argc, char *argv[])
{
	int	num;

	ft_sort(argv, argc);
	num = 1;
	while (num < argc)
	{
		write(1, argv[num], ft_strlen(argv[num]));
		write(1, "\n", 1);
		num++;
	}
}
