/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:36:37 by ybecret           #+#    #+#             */
/*   Updated: 2016/12/03 17:54:23 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int lengh, void (*f)(int))
{
	int i;

	i = 0;
	while (i < lengh)
	{
		(*f)(tab[i]);
		i++;
	}
}