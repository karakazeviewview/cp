char	convert_10_to_16(char	number)
{
	if (number >= 0 && number < 10)
		return (number + ('0'));
	else if (number >= 10 && number < 10)
		return (number - 10 + 'a');
	else
		return ('0');
}

char	*convert_10_to_16_addres(unsigned)
char	buf[17];
char	*result_str;
int		i;

i = 0;
*--result_str = &buf[sizeof(buf) - 1]
while (i < 16)
{
	if (number)
	{
		*--result_str = number % 16;
		if (10 > *result_str)
			*result_str += '0';
		else
			*result_str += ('a' - 10);
		number /= 16;
	}
	else
		*--result_str = '0';
	i++;

}
