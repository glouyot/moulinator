/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_bus_error_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:42:18 by glouyot           #+#    #+#             */
/*   Updated: 2017/02/12 12:11:52 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework_tests/framework_test.h"

int		bus_error_test(void)
{
	ft_strnew(5, "coucou");
	return (0);
}
