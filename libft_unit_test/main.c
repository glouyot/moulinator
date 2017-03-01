/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 11:28:22 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 11:47:31 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft_unit_test.h"

int		main(void)
{
	int	ret;

	ret = 0;
	if (atoi_launcher() && ++ret)
		print_red(1, "test failled\n", 13);
	else
		print_green(1, "test passed\n", 12);
	return (ret);
}
