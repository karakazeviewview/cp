#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	unsigned int	upper;

	i = 0;
	upper = 1;
	while (str[i])
	{
		if ((upper == 1) && ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if ((upper == 0) && ('A' <= str[i] && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		if ((str[i] < 'a' || 'z' < str[i])
			&& (str[i] < 'A' || 'Z' < str[i])
			&& (str[i] < '0' || '9' < str[i]))
			upper = 1;
		else
			upper = 0;
		i++;
	}
	return (str);
}
