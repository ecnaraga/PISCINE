#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_simplifie(unsigned long int n)
{
	if (n < 10)
		ft_putchar(n + 48);
	if (n >= 10)
	{
		ft_putnbr_simplifie(n / 10);
		ft_putchar((n % 10) + 48);
	}
}

unsigned long int	ft_is_prime(unsigned long int n, unsigned long int x)
{
	unsigned long int	nb;

	nb = n;
	if (nb % x == 0 && nb != x)
		return (0);
	if (x * x > nb)
		return (1);
	else
		return (ft_is_prime(n, x + 1));
}

void	add_prime_sum(long int n)
{
	unsigned long int	result;
	unsigned long int	nb;

	nb = n;
	result = 0;
	while (nb > 1)
	{
		if (ft_is_prime(nb, 2) == 1)
			result = result + nb;
		nb--;
	}
	ft_putnbr_simplifie(result);
}

long int	atoi(char *str)
{
	long int	nb;
	int	s;
	unsigned int	i;

	nb = 0;
	i = 0;
	s = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * s);
}

int	main(int ac, char **av)
{
	long int	nb;

	if (ac != 2)
		ft_putchar('0');
	else
	{
		nb = atoi(av[1]);
		if (nb < 2)
			ft_putchar('0');
		else
		{
			add_prime_sum(nb);
		}
	}
	ft_putchar('\n');
	return (0);
}
