/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:44:11 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:44:39 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../libft_unit_test.h"

int	isprint_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "ISPRINT:\n", 9);
	testlist = NULL;
	load_test(&testlist, "Basic test", &isprint_basic,
			create_signal_code(0, 0));
	return (launch_test(&testlist));
}
