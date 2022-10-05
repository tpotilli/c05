/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:56:16 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/04 13:45:43 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	var;

	var = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			nb *= var;
			power--;
		}
	}
	return (nb);
}
