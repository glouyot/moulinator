/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_memalloc_too_big.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 16:53:17 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 16:53:55 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <stdlib.h>

int	memalloc_basic_2(void)
{
	char	*cmp;

	cmp = ft_memalloc(ULONG_MAX);
	if (!cmp)
		return (0);
	return (1);
}
