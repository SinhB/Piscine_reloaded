/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 14:41:56 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/03 18:28:42 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	buf;
	int		ret;

	ret = 1;
	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
	}
	else
	{
		if ((fd = open(argv[1], O_RDONLY)) < 0)
			return (0);
		while ((ret = read(fd, &buf, 1)) > 0)
		{
			write(1, &buf, 1);
		}
		close(fd);
	}
	return (1);
}
