#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	char_test(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (0);
}

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (char_test(str[i]) == 2 && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			str[i] = str[i] - 32;
		else if (char_test(str[i]) == 1 && !(str[i + 1] == ' ' || str[i + 1] == '\0'))
			str[i] = str[i] + 32;
		i++;
	}
	ft_putstr(str);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			rstr_capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
