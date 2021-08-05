/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 07:45:14 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 04:09:48 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t			counter;
	unsigned int	len;

	len = 0;
	if (!src)
		return (0);
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	counter = 0;
	while (src[counter] != '\0' && counter < (dstsize - 1))
	{
		dst[counter] = src[counter];
		++counter;
	}
	if (dstsize)
		dst[counter] = '\0';
	return (len);
}
