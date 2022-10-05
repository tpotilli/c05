/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:33:32 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/03 13:51:15 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 1 || power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
