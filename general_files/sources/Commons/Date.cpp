/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:02:18 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/29 13:31:59 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Header.hpp"

Date::Date()
	: dateString("2000-01-01"),
	  isLeapYear(true),
	  day(1),
	  month(1),
	  year(2000),
	  isValid(true){
	FalseLoadingMessage("Generating default date ");
}

Date::Date(bool isValid){
	this->year = randomYearGenerator(isValid);
	this->month = randomMonthGenerator(isValid);
	this->day = randomDayGenerator(isValid, this->month, this->year);
	this->isValid = isValid;
	this->isLeapYear = isLeap();
	this->dateString = transformToDateString();
	FalseLoadingMessage("Generating " + std::string(isValid ? "valid" : "invalid") + " date");
}
Date::Date(int day, int month, int year)
	: day(day), 
	  month(month),
	  year(year){
	this->isLeapYear = isLeap();
	this->dateString = transformToDateString();
	this->isValid = validDefiner();
	FalseLoadingMessage("Generating defined date ");
}

Date::Date(const Date &src)
	: day(src.day),
	  month(src.month),
	  year(src.year),
	  isLeapYear(src.isLeapYear),
	  dateString(src.dateString),
	  isValid(src.isValid){
	FalseLoadingMessage("Generating copied date ");

}
Date::~Date(){}

Date &Date::operator=(const Date &src){
	if (this != &src) {
		this->day = src.day;
		this->month = src.month;
		this->year = src.year;
		this->isValid = src.isValid;
		this->isLeapYear = src.isLeapYear;
		this->dateString = src.dateString;
	}
	return (*this);
}

std::string         Date::getDate() const{
	return (this->dateString);
}
int                 Date::getDay() const{
	return (this->day);	
}
int                 Date::getMonth() const{
	return (this->month);	
}
int                 Date::getYear() const{
	return (this->year);
}
bool                Date::getIsValid() const{
	return (this->isValid);
}
bool                Date::getIsLeap() const{
	return (this->isLeapYear);
}

std::string         Date::transformToDateString(){
	std::ostringstream oss;
	
	oss << std::setfill('0')
	    << std::setw(4) << this->year << "-"
	    << std::setw(2) << this->month << "-"
	    << std::setw(2) << this->day;
	return (oss.str());
}

bool Date::validDefiner() {
	int maxDay = 31;
	if (this->month < 1 || this->month > 12)
		return false;
	if (this->day < 1)
		return false;
	if (this->year > 2025)
		return false;
	if (this->month == 2) {
		if (this->isLeapYear)
			maxDay = 29;
		else
			maxDay = 28;
	}
	else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11)
		maxDay = 30;

	if (this->day > maxDay)
		return false;
	return true;
}


bool Date::isLeap(){
	return ((this->year % 4 == 0 && this->year % 100 != 0)|| (this->year % 400 == 0));
}
