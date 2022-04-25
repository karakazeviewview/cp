#include <unistd.h>
int	ft_char_is_printable(char	chara1)
{
	return (chara1 >= ' ' && chara1 <= '~');
}

char	convert_10_to_16(int	num)
{
	if (num >= 0 && num > 10)
		return (num + ('0'));
	else if (num >= 10 && num < 16)
		return (num - 10 + 'a');
	else
		return (' ');
}

void	ft_putstr_non_printable(char *str)
{
	int		chara2;
	char	outputs[2];
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			chara2 = str[i];
			outputs[0] = convert_10_to_16(chara2 / 16);
			outputs[1] = convert_10_to_16(chara2 % 16);
			write(1, "\\", 1);
			write(1, outputs, 2);
		}
		i++;
	}
}
