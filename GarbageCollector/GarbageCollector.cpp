/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:32:05 by chhoflac          #+#    #+#             */
/*   Updated: 2025/08/05 16:04:31 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filegen.hpp>

GarbageCollector::GarbageCollector() {}

GarbageCollector::~GarbageCollector() {}

std::vector<IFile *> &GarbageCollector::getIFiles() {}

std::vector<Date *> &GarbageCollector::getDates() {}

std::vector<ILine *> &GarbageCollector::getLines() {}

std::vector<IWriter *> &GarbageCollector::getIWriters() {}

std::vector<IFileGenerator *> &GarbageCollector::getIFileGenerators() {}

std::vector<ILineGenerator *> &GarbageCollector::getLineGenerators() {}

int GarbageCollector::registerIFile(IFile *file) {
	if(file){
		this->IFiles.push_back(file);
		return (0);
	}
	std::cerr << "error: null pointer" << std::endl;
	return (-1);
}

int GarbageCollector::registerDate(Date *date) {
	if(date){
		this->Dates.push_back(date);
		return (0);
	}
	std::cerr << "error: null pointer" << std::endl;
	return (-1);
}

int GarbageCollector::registerLine(ILine *line) {
	if(line){
		this->Lines.push_back(line);
		return (0);
	}
	std::cerr << "error: null pointer" << std::endl;
	return (-1);
}

int GarbageCollector::registerWriter(IWriter *writer) {
	if(writer){
		this->Writers.push_back(writer);
		return (0);
	}
	std::cerr << "error: null pointer" << std::endl;
	return (-1);
}

int GarbageCollector::registerFileGenerator(IFileGenerator *fileGenerator) {
	if(fileGenerator){
		this->FileGenerators.push_back(fileGenerator);
		return (0);
	}
	std::cerr << "error: null pointer" << std::endl;
	return (-1);
}

int GarbageCollector::registerLineGenerator(ILineGenerator *lineGenerator) {
	if(lineGenerator){
		this->LineGenerators.push_back(lineGenerator);
		return (0);
	}
	std::cerr << "error: null pointer" << std::endl;
	return (-1);
}

int GarbageCollector::clearAFiles() {}

int GarbageCollector::clearDates() {}

int GarbageCollector::clearLines() {}

int GarbageCollector::clearWriters() {}

int GarbageCollector::clearFileGenerator() {}

int GarbageCollector::clearLineGenerator() {}

int GarbageCollector::clearAll() {}
