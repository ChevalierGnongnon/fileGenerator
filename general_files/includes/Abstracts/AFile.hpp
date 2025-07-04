/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AFile.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:31:02 by chhoflac          #+#    #+#             */
/*   Updated: 2025/07/04 17:21:40 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <filegen.hpp>

template <typename T>
class AFile{
	private :
		std::map <int, ILine *>			content;
		const std::string				name;
		const std::string				extension;
		int								totalLines;
		int								goodLines;
		int								badLines;
		int								predefinedLines;
		AFile();
		AFile &operator=(const AFile &src);
	public :
		AFile(const std::string name, const std::string extension);
		AFile(const std::string name, const std::string extension, int nbLines);
		AFile(const std::string name, const std::string extension, int good, int bad, int predefined);
		AFile(const AFile &src);
		virtual ~AFile();
		
		const std::map <int, ILine *>	&getContent() const;
		const std::string				&getName() const;
		const std::string				&getExtension() const;
		int								getTotalLines() const;
		int								getGoodLines() const;
		int								getBadLines() const;
		int								getPredefinedLines() const;
	
		void							setTotalLines(int n);
		void							setGoodLines(int n);
		void							setBadLines(int n);
		void							setPredefinedLines(int n);
		void							addLine(ILine *line);

		virtual AFile					*clone() const = 0; //Duplicate this file
		virtual void					addLines(const T &container) = 0;
		virtual void					generateLines() = 0;
		virtual void					generateFile() = 0;
};

#include "../tpp/AFile.tpp"