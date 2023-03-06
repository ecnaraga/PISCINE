#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int	i;

	i = 0;
	if (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
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
	if (ac == 2)
	{
		first_word(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
