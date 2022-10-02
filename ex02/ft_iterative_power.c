/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:56:16 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/28 18:20:23 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i;
    int cpt;

    i = nb;
    cpt = 1;
    if (power == 0 || nb == 0)
        return (1);
	while (cpt != power)
	{
		nb = nb * i;
        cpt++;
	}
	return (nb);
}

int main()
{
    printf("%d",ft_iterative_power(5, 5));
}