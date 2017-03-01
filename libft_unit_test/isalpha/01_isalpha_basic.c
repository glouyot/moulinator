/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isalpha_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:37:52 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:47:45 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <ctype.h>

int	isalpha_basic(void)
{
	for (int i = -1; i < 1024; i++)
		if (ft_isalpha(i) != isalpha(i))
			return (1);
	return (0);
}
