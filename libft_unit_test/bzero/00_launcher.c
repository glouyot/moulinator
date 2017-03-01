/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 14:15:12 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 14:27:19 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../libft_unit_test.h"

int	bzero_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "BZERO:\n", 6);
	testlist = NULL;
	load_test(&testlist, "Basic test 1   ", &bzero_basic_1,
			create_signal_code(0, 0));
	load_test(&testlist, "Zero value test", &bzero_zero_value,
			create_signal_code(0, 0));
	return (launch_test(&testlist));
}
