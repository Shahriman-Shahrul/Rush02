int		ft_atoi(char *str)
{
	int i;
	int a;
	int v;

	i = 0;
	a = 0;
	v = 0;
	while (str[i] && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))// while values inside the array is not a number 
	{
		if (str[i] == '-') // If its negative , move forward 
			a++;
		if (str[i] >= '0' && str[i] <= '9') //
			v = ((v * 10) + (str[i] - '0'));
		i++;
	}
	if ((a % 2) == 1) // We convert the negative to positive 
		v = (v * -1);
	return (v);
}