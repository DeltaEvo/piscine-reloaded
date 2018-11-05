/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:48:43 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/11/05 15:48:53 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int r;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	r = nb;
	while (++i < nb)
		r *= i;
	return (r);
}
