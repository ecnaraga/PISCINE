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

int	check_no_double(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;
	char	s3[257];

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check_no_double(s3, s1[i]) == 1)
		{
			s3[j] = s1[i];
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (check_no_double(s3, s2[i]) == 1)
		{
			s3[j] = s2[i];
			j++;
		}
		i++;
	}
	s3[j] = '\0';
	ft_putstr(s3);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
