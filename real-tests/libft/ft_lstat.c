/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glouyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 09:34:18 by glouyot           #+#    #+#             */
/*   Updated: 2016/11/11 09:59:55 by glouyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *lst, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
