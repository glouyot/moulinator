/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isdigit_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:39:44 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:40:05 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <ctype.h>

int	isdigit_basic(void)
{
	for (int i = -1; i < 1024; i++)
		if (ft_isdigit(i) != isdigit(i))
			return (1);
	return (0);
}
