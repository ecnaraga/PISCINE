#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	if (n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	result;

	i = 0;
	s = 1;
	result = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * s);
}

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	if (start < end)
		tab = malloc(sizeof(int) * (end - start + 1));
	else if (start == end)
		tab = malloc(sizeof(int));
	else if (start > end)
		tab = malloc(sizeof(int) * (start - end + 1));
	if (!tab)
		return (0);
	if (start < end)
	{
		size = end - start;
		while (i <= size)
		{
			tab[i] = start;
			i++;
			start++;
		}
	}
	else if (start == end)
		tab[0] = start;
	else if (start > end)
	{
		size = start - end;
		while (i <= size)
		{
			tab[i] = start;
			i++;
			start--;
		}
	}
	return (tab);
}

int	main(int ac, char **av)
{
	int	start;
	int	end;
	int	i;
	int	*tab;
	int	size;

	start = 0;
	end = 0;
	i = 0;
	if (ac == 3)
	{
		start = ft_atoi(av[1]);
		end = ft_atoi(av[2]);
		tab = ft_range(start, end);
		size = end - start;
		if (size < 0)
			size = -size;
		while (i <= size)
		{
			ft_putnbr(tab[i]);
			ft_putchar('\n');
			i++;
		}
		free(tab);
	}
	else
		ft_putchar('\n');
	return (0);
}
