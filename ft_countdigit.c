/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 19:45:33 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/09 19:45:41 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countdigit(int n)
{
	int	count;

	count = 1;
	if (n == -2147483648)
		return (10);
	else if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}
