/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:17:45 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/03 17:49:35 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		bool;
	char	*swap;

	bool = 1;
	if (argc != 1)
	{
		while (bool)
		{
			bool = 0;
			i = 0;
			while (i < argc - 1)
			{
				if ((ft_strcmp(argv[i], argv[i + 1]) > 0))
				{
					swap = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = swap;
					bool = 1;
				}
				i++;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (1);
}
