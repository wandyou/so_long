/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:21:46 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 04:59:59 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_parse_line(t_solong *solong, int ret)
{
	if (solong->map.y == 1 || ret == 0)
		ft_parse_ends(solong);
	else
		ft_parse_middle(solong);
}
