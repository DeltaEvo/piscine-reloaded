/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:23:47 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/11/05 16:24:15 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		f_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*out;

	if (src == 0)
		return (0);
	len = f_strlen(src);
	out = malloc((len + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	while (*src)
		*out++ = *src++;
	*out = '\0';
	return (out - len);
}
