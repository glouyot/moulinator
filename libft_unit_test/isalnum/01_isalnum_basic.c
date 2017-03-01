/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isalnum_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:29:39 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:32:53 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <ctype.h>

int	isalnum_basic(void)
{
	for (int i = -1; i < 1024; i++)
		if (ft_isalnum(i) != isalnum(i))
			return (1);
	return (0);
}
