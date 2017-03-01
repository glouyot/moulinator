/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:43:31 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:43:56 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../libft_unit_test.h"

int	isdigit_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "ISDIGIT:\n", 9);
	testlist = NULL;
	load_test(&testlist, "Basic test", &isdigit_basic,
			create_signal_code(0, 0));
	return (launch_test(&testlist));
}
