/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 16:07:28 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 17:43:03 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../libft_unit_test.h"

int	memalloc_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "MEMALLOC:\n", 10);
	testlist = NULL;
	load_test(&testlist, "Basic test 1", &memalloc_basic_1,
			create_signal_code(0, 0));
	load_test(&testlist, "Basic test 2", &memalloc_basic_2,
			create_signal_code(0, 0));
	load_test(&testlist, "Too big test", &memalloc_too_big,
			create_signal_code(0, 0));
	load_test(&testlist, "Size test   ", &memalloc_size,
			create_signal_code(0, 0));
	return (launch_test(&testlist));
}
