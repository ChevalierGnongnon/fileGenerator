/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:10:42 by chhoflac          #+#    #+#             */
/*   Updated: 2025/08/05 16:01:06 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filegen.hpp>


class GarbageCollector{
	private :
		std::vector<IFile *> 		IFiles;
		std::vector<Date *>				Dates;
		std::vector<ILine *> 			Lines;
		std::vector<IWriter *>			Writers;
		std::vector<IFileGenerator *>	FileGenerators;
		std::vector<ILineGenerator *> 	LineGenerators;
		GarbageCollector(const GarbageCollector &src);
		GarbageCollector &operator=(const GarbageCollector &src);
	public :
		GarbageCollector();
		~GarbageCollector();
		
		std::vector <IFile*>			&getIFiles();
		std::vector <Date *>			&getDates();
		std::vector <ILine *>			&getLines();
		std::vector <IWriter *>			&getIWriters();
		std::vector <IFileGenerator *>	&getIFileGenerators();
		std::vector <ILineGenerator *> 	&getLineGenerators();

		int							registerIFile(IFile *file);
		int							registerDate(Date *date);
		int							registerLine(ILine *line);
		int							registerWriter(IWriter *writer);
		int							registerFileGenerator(IFileGenerator *fileGenerator);
		int							registerLineGenerator(ILineGenerator *lineGenerator);

		int							clearAFiles();
		int							clearDates();
		int							clearLines();
		int							clearWriters();
		int							clearFileGenerator();
		int							clearLineGenerator();

		int							clearAll();
};
