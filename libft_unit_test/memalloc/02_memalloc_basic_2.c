/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_memalloc_basic_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 16:27:38 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 16:37:53 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <stdlib.h>

int	memalloc_basic_2(void)
{
	size_t	i;
	char	*cmp;
	char	*test;
	int		diff;

	i = 1024;
	test = ft_memalloc(i);
	cmp = malloc(i);
	bzero(cmp, i);
	diff = memcmp(cmp, test, i);
	free(cmp);
	free(test);
	if (!diff)
		return (0);
	return (1);
}
