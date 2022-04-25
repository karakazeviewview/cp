#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	num;
	int	*answer;

	num = 0;
	if (min >= max)
		return (NULL);
	answer = malloc(sizeof(*answer)*(max - min));
	if (answer == NULL)
		return (NULL);
	while (min < max)
	{
		answer[num] = min;
		num++;
		min++;
	}
	return (answer);
}
