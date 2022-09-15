/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suno <suno@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:52:19 by suno              #+#    #+#             */
/*   Updated: 2022/09/15 18:42:32 by suno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (i < nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <=2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return(ft_find_next_prime(nb++));
}
