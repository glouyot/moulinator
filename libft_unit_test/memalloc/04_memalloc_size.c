/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_memalloc_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 17:39:41 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 17:58:05 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <stdlib.h>

int	memalloc_size(void)
{
	char	*test;
	size_t	size;

	size = 512;
	test = ft_memalloc(size);
	memset(test, 'a', 2048);
	for (size_t i = 0; i < 2048; i++)
		if (!(test[i] == 'a'))
			return (1);
	return (0);
}
