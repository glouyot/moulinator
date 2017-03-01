/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_bzero_zero_value.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 14:27:57 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 14:28:04 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <strings.h>

int	bzero_zero_value(void)
{
	char	str1[BSIZE];
	char	str2[BSIZE];

	memset(str1, 'a', BSIZE);
	memset(str2, 'a', BSIZE);
	ft_bzero(str1, 0);
	bzero(str2, 0);
	if (!memcmp(str1, str2, BSIZE))
		return (0);
	return (1);
}
