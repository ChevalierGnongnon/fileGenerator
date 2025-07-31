/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ILine.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:03:35 by chhoflac          #+#    #+#             */
/*   Updated: 2025/07/31 11:38:20 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ILine {
	public:
		virtual				~ILine(){};
		virtual ILine		*clone() const = 0;
		virtual std::string	toString() const = 0;
};