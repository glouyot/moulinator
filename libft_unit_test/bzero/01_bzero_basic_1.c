/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_bzero_basic_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 14:16:27 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 14:23:22 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <strings.h>

int	bzero_basic_1(void)
{
	char	str1[BSIZE];
	char	str2[BSIZE];

	memset(str1, 'a', BSIZE);
	memset(str2, 'a', BSIZE);
	ft_bzero(str1, 20);
	bzero(str2, 20);
	if (!memcmp(str1, str2, BSIZE))
		return (0);
	return (1);
}
