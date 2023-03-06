#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_char(char c)
{
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		return (1);
	if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		return (2);
	return (0);
}

void	row_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_check_char(str[i]) == 1)
			ft_putchar(str[i] + 13);
		else if (ft_check_char(str[i]) == 2)
			ft_putchar(str[i] - 13);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		row_13(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
