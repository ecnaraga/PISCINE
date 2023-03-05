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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		ft_swap(&str[i], &str[len - 1 - i]);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putstr(ft_strrev(av[ac - 1]));
	}
	ft_putchar('\n');
	return (0);
}
