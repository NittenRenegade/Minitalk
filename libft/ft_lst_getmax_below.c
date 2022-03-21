/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getmax_below.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:07:23 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:12:37 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_getmax_below(t_list *lst, size_t max_size, long below)
{
	t_list	*max;
	size_t	i;

	if (!lst)
		return (NULL);
	i = 0;
	max = lst;
	while (lst && (max_size == 0 || i < max_size)
		&& (long)lst->content < below)
	{
		if ((long)max->content < (long)lst->content)
			max = lst;
		lst = lst->next;
		i++;
	}
	return (max);
}
