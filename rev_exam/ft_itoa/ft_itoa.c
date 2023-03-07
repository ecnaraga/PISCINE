#include <unistd.h>
#include <stdlib.h>

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

char	*ft_itoa_recursive(long int nb, char *str, int i)
{
	long int	n;

	n = nb;
	if (nb < 0)
	{
		str[0] = '-';
		n = -nb;
	}
	if (n <= 9)
		str[i] = n + '0';
	else
	{
		ft_itoa_recursive(n / 10, str, i - 1);
		str[i] = (n % 10) + '0';
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	int	count;
	char	*str;
	long int	n;

	count = 0;
	n = nb;
	if (nb < 0 || nb == 0)
	{
		count ++;
		n = n * -1;
	}
	while (n >= 1)
	{
		count ++;
		n /= 10;
	}
	n = nb;
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str = ft_itoa_recursive(n, str, count - 1);
	str[count] = '\0';
	return (str);
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

int	main(int ac, char **av)
{
	char	*str;

	if (ac == 2)
	{
		str = ft_itoa(ft_atoi(av[1]));
		ft_putstr(str);
		free(str);
	}
	ft_putchar('\n');
	return (0);
}
