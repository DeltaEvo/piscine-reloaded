/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:21:38 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/11/05 16:21:48 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char *av[])
{
	int i;

	i = 0;
	while (++i < argc)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
