# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 10:19:12 by chhoflac          #+#    #+#              #
#    Updated: 2025/07/02 09:05:28 by chhoflac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES:

NAME        := filegen
CXX         := c++
CXXFLAGS    := -Wall -Wextra -Werror -std=c++98 -I.

BUILD_DIR   := build

GENERAL := general_files/sources/Commons/Date.cpp \
           general_files/sources/Commons/File.cpp \
           general_files/sources/Commons/InterfaceUser.cpp \
           general_files/sources/Commons/Program.cpp

DEFAULT := $(GENERAL) mains/main.cpp
CSV     := mains/main_csv.cpp
TXT     := mains/main_txt.cpp

GENERAL_OBJS := $(foreach f,$(GENERAL),$(BUILD_DIR)/$(f:.cpp=.o))
DEFAULT_OBJS := $(foreach f,$(DEFAULT),$(BUILD_DIR)/$(f:.cpp=.o))
CSV_OBJS     := $(foreach f,$(CSV),    $(BUILD_DIR)/$(f:.cpp=.o))
TXT_OBJS     := $(foreach f,$(TXT),    $(BUILD_DIR)/$(f:.cpp=.o))

COMMON := $(GENERAL_OBJS)

all: default

default:
	@bash shellScripts/banner.sh "DEFAULT"
	$(MAKE) $(DEFAULT_OBJS)
	$(CXX) $(CXXFLAGS) $(DEFAULT_OBJS) -o $(NAME)

csv:
	@bash shellScripts/banner.sh "CSV"
	$(MAKE) $(CSV_OBJS) $(COMMON)
	$(CXX) $(CXXFLAGS) $(CSV_OBJS) $(COMMON) -o $(NAME)_csv

txt:
	@bash shellScripts/banner.sh "TXT"
	$(MAKE) $(TXT_OBJS) $(COMMON)
	$(CXX) $(CXXFLAGS) $(TXT_OBJS) $(COMMON) -o $(NAME)_txt

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME) $(NAME)_csv $(NAME)_txt

re: fclean all

.PHONY: all clean fclean re default csv txt
