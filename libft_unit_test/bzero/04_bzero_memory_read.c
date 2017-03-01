/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bzero_memory_read.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 14:37:13 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 14:39:28 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"
#include <strings.h>

int	bzero_memory_read(void)
{
	char	str1[BSIZE];

	memset(str1, 'a', BSIZE);
	ft_bzero(str1, BSIZE + 5);
	return (0);
}
