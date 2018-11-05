/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:50:44 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/11/05 15:50:55 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		curr;
	float	tmp;
	int		last;

	if (nb <= 0)
		return (0);
	curr = nb / 2;
	last = -1;
	tmp = curr;
	while (curr != last)
	{
		last = curr;
		tmp = 0.5 * ((float)last + (float)nb / (float)last);
		curr = tmp;
	}
	if (tmp == (float)curr)
		return (curr);
	else
		return (0);
}
