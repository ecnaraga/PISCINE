#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_simplifie(int n)
{
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr_simplifie(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	fizzbuzz(void)
{
	int	nb;

	nb = 0;
	while (++nb <= 100)
	{
		if (nb % 15 == 0)
			ft_putstr("fizzbuzz");
		else if (nb % 3 == 0)
			ft_putstr("fizz");
		else if (nb % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr_simplifie(nb);
		ft_putchar('\n');
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
