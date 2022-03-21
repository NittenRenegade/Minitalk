/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getlmax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:23:42 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:06:26 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_getlmax(t_list *lst, long max)
{
	size_t	i;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = NULL;
	i = 0;
	while (lst)
	{
		if ((long)lst->content > max)
			tmp = lst;
		lst = lst->next;
		i++;
	}
	return (tmp);
}
