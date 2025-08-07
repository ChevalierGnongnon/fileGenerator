/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:32:05 by chhoflac          #+#    #+#             */
/*   Updated: 2025/08/07 11:03:16 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filegen.hpp>

GarbageCollector::GarbageCollector() {}

GarbageCollector::~GarbageCollector() {}

std::vector<IFile *> &GarbageCollector::getIFiles() {
	return (this->IFiles);
}

std::vector<Date *> &GarbageCollector::getDates() {
	return (this->Dates);
}

std::vector<ILine *> &GarbageCollector::getLines() {
	return (this->Lines);
}

std::vector<IWriter *> &GarbageCollector::getIWriters() {
	return (this->Writers);
}

std::vector<IFileGenerator *> &GarbageCollector::getIFileGenerators() {
	return (this->FileGenerators);
}

std::vector<ILineGenerator *> &GarbageCollector::getLineGenerators() {
	return (this->LineGenerators);
}

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

int GarbageCollector::clearFiles() {
	std::vector<IFile *>::iterator i = this->IFiles.begin();
	while (i != this->IFiles.end()){
		delete *i;
		i++;
	}
	this->IFiles.clear();
}

int GarbageCollector::clearDates() {
	std::vector<Date *>::iterator i = this->Dates.begin();
	while (i != this->Dates.end()){
		delete *i;
		i++;
	}
	this->Dates.clear();
}

int GarbageCollector::clearLines() {
	std::vector<ILine *>::iterator i = this->Lines.begin();
	while (i != this->Lines.end()){
		delete *i;
		i++;
	}
	this->Lines.clear();
}

int GarbageCollector::clearWriters() {
	std::vector<IWriter *>::iterator i = this->Writers.begin();
	while (i != this->Writers.end()){
		delete *i;
		i++;
	}
	this->Writers.clear();
}

int GarbageCollector::clearFileGenerator() {
	std::vector<IFileGenerator *>::iterator i = this->FileGenerators.begin();
	while (i != this->FileGenerators.end()){
		delete *i;
		i++;
	}
	this->FileGenerators.clear();
}

int GarbageCollector::clearLineGenerator() {
	std::vector<ILineGenerator *>::iterator i = this->LineGenerators.begin();
	while (i != this->LineGenerators.end()){
		delete *i;
		i++;
	}
	this->LineGenerators.clear();
}

int GarbageCollector::clearAll() {
	this->clearFiles();
	this->clearDates();
	this->clearLines();
	this->clearWriters();
	this->clearFileGenerator();
	this->clearLineGenerator();
}
