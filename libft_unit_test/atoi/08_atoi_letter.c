/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_atoi_letter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 13:08:15 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 13:08:42 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_unit_test.h"

int	atoi_letter(void)
{
	if (ft_atoi("4o2") == 4)
		return (0);
	return (-1);
}
