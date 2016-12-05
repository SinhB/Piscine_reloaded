/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybecret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:45:17 by ybecret           #+#    #+#             */
/*   Updated: 2016/11/16 17:49:46 by ybecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	result = nb;
	while (nb != 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
