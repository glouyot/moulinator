/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_unit_test.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 11:03:14 by glouyot           #+#    #+#             */
/*   Updated: 2017/03/01 15:47:24 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_UNIT_TEST_H
# define LIBFT_UNIT_TEST_H

# include "./libft/libft.h"

# define	BSIZE		0xF00

int	atoi_launcher(void);
int	atoi_basic_1(void);
int	atoi_basic_2(void);
int	atoi_min(void);
int	atoi_max(void);
int	atoi_out(void);
int	atoi_thousand(void);
int	atoi_space(void);
int	atoi_letter(void);
int	bzero_launcher(void);
int	bzero_basic_1(void);
int	bzero_zero_value(void);
int	bzero_null(void);
int	bzero_memory_read(void);
int	isalnum_launcher(void);
int	isalnum_basic(void);
int	isalpha_launcher(void);
int	isalpha_basic(void);
int	isascii_launcher(void);
int	isascii_basic(void);
int	isdigit_launcher(void);
int	isdigit_basic(void);
int	isprint_launcher(void);
int	isprint_basic(void);
#endif

