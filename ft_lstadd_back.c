/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:21:17 by hfanzaou          #+#    #+#             */
/*   Updated: 2021/11/20 20:51:19 by hfanzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
		if (*lst)
		{
			while ((*lst)->next != NULL)
				*lst = (*lst)->next;
			(*lst)->next = new;
		}
		else
			*lst = new;	
}
