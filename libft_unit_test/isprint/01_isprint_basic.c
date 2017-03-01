/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isprint_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:40:47 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:41:16 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <ctype.h>

int	isprint_basic(void)
{
	for (int i = -1; i < 1024; i++)
		if (ft_isprint(i) != isprint(i))
			return (1);
	return (0);
}
