/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:06:52 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/11/05 17:21:50 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SNS(s) s, sizeof(s)
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[4096];
	int		len;

	if (argc == 1)
		return (write(2, SNS("File name missing.\n")));
	if (argc > 2)
		return (write(2, SNS("Too many arguments.\n")));
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (1);
	while ((len = read(fd, buffer, 4096)) > 0)
		write(1, buffer, len);
	close(fd);
	return (0);
}
