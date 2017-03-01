/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:22:38 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:36:31 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../libft_unit_test.h"

int	isalnum_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "ISALNUM:\n", 9);
	testlist = NULL;
	load_test(&testlist, "Basic test", &isalnum_basic,
			create_signal_code(0, 0));
	return (launch_test(&testlist));
}
