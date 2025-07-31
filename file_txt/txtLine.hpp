/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   txtLine.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:21:36 by chhoflac          #+#    #+#             */
/*   Updated: 2025/07/31 12:04:33 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filegen.hpp>

class txtLine : public ILine{
	private:
		const std::vector<std::string>	predefinedWords;
		const std::string				content;
		const size_t					len;
		const size_t					nbWords;
		
	public:
		txtLine();
		txtLine(const size_t len);
		txtLine(const size_t len, const size_t nbWords);
		txtLine(const size_t len, const size_t nbWords, const std::vector<std::string> predefinedWords);
		txtLine(const size_t nbWords);
		virtual ~txtLine();
		
		const std::string				&getContent() const;
		const size_t					getLen() const;
		const size_t					getNbWords() const;
		const std::vector<std::string>	&getPredefinedWords() const;
		
		ILine 							*clone() const;
		std::string						toString() const;
};
