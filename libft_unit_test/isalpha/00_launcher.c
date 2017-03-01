/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:41:58 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:42:30 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../libft_unit_test.h"

int	isalpha_launcher(void)
{
	t_unit_test	*testlist;

	print(1, "ISALPHA:\n", 9);
	testlist = NULL;
	load_test(&testlist, "Basic test", &isalpha_basic,
			create_signal_code(0, 0));
	return (launch_test(&testlist));
}
