/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 11:22:02 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 14:12:57 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../libft_unit_test.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "ATOI:\n", 6);
	testlist = NULL;
	load_test(&testlist, "Basic test 1 ", &atoi_basic_1,
			create_signal_code(0, 0));
	load_test(&testlist, "Basic test 2 ", &atoi_basic_2,
			create_signal_code(0, 0));
	load_test(&testlist, "Min test     ", &atoi_min,
			create_signal_code(0, 0));
	load_test(&testlist, "Max test     ", &atoi_max,
			create_signal_code(0, 0));
	load_test(&testlist, "Out test     ", &atoi_out,
			create_signal_code(0, 0));
	load_test(&testlist, "Thousand test", &atoi_thousand,
			create_signal_code(0, 0));
	load_test(&testlist, "Space test   ", &atoi_space,
			create_signal_code(0, 0));
	load_test(&testlist, "Letter test  ", &atoi_letter,
			create_signal_code(0, 0));
	return (launch_test(&testlist));
}
