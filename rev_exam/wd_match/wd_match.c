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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_wd_match(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;
	char	s3[257];

	i = 0;
	j = 0;
	k = 0;
	while (s2[j] && s1[i])
	{
		if (s1[i] == s2[j])
		{
			s3[k] = s1[i];
			k++;
			i++;
		}
		j++;
	}
	s3[k] = '\0';
	if (ft_strcmp(s1, s3) == 0)
		ft_putstr(s3);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_wd_match(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
