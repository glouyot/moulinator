/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isascii_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:39:01 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:39:22 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <ctype.h>

int	isascii_basic(void)
{
	for (int i = -1; i < 1024; i++)
		if (ft_isascii(i) != isascii(i))
			return (1);
	return (0);
}
