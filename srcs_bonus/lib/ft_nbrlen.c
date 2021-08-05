/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:10:34 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 04:10:15 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

size_t	ft_nbrlen(int nbr, int base)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0 && base == 10)
		len += 1;
	while (nbr)
	{
		nbr /= base;
		len += 1;
	}
	return (len);
}
