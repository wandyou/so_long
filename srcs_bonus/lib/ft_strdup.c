/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:09:20 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/05 04:10:48 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_strdup(char *s)
{
	size_t	i;
	size_t	len_s;
	char	*dup;

	i = 0;
	len_s = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!(dup))
		return (NULL);
	while (i < len_s)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
