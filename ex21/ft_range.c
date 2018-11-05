/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:26:07 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/11/05 16:26:16 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int len;

	if (min >= max)
		return (0);
	len = max - min;
	tab = malloc(len * sizeof(int));
	if (!tab)
		return (0);
	while (min < max)
		*tab++ = min++;
	return (tab - len);
}
