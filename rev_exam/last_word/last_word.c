#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	last_word(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		i = ft_strlen(str) - 1;
		while (i > 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i--;
		while (i > 0 && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i--;
		if (i > 0 || (i == 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')))
			i++;
		while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	char	*str;

	if (ac == 2)
	{
		str = av[1];
		last_word(str);
	}
	ft_putchar('\n');
	return (0);
}
