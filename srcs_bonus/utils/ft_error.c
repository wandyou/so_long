/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:58:08 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/03 08:00:14 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_error(int clean_success, char *msg)
{
	printf("\033[0;31mError\n");
	if (!clean_success)
		printf("An error occured during cleaning process ...");
	else
		printf("%s", msg);
	printf("\n\033[0m");
	exit(EXIT_FAILURE);
}
