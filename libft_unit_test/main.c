/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 11:28:22 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 16:40:21 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft_unit_test.h"
#include <stdio.h>
int		main(void)
{
	int	ret;

	ret = 0;
	if (atoi_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	if (bzero_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	if (isalnum_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	if (isalpha_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	if (isascii_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	if (isdigit_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	if (isprint_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	if (memalloc_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	
	
	
	
	
	
	return (ret);
}
