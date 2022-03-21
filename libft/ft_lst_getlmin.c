/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getlmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:23:32 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:08:24 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_getlmin(t_list *lst, long min)
{
	size_t	i;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = NULL;
	i = 0;
	while (lst)
	{
		if ((long)lst->content < min)
			tmp = lst;
		lst = lst->next;
		i++;
	}
	return (tmp);
}
