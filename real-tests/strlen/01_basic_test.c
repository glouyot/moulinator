/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 06:29:08 by hmartzol          #+#    #+#             */
/*   Updated: 2017/02/12 13:48:47 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <string.h>

/*
** length returned by ft_strlen should be the same has strlen for same input
*/

int	basic_test(void)
{
	if (ft_strlen("Hello") == strlen("Hello"))
		return (0);
	else
		return (-1);
}
