/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 11:50:57 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 11:53:20 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"

int	atoi_min(void)
{
	if (ft_atoi("-2147483648") == -2147483648)
		return (0);
	return (-1);
}
