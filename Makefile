.SUFFIXES:

# Compiler settings
NAME        := filegen
CXX         := c++
CXXFLAGS    := -Wall -Wextra -Werror -std=c++98
BUILD_DIR   := build

# Source files grouped by mode
GENERAL := general_files/sources/Commons/Date.cpp \
           general_files/sources/Commons/File.cpp \
           general_files/sources/Commons/InterfaceUser.cpp \
           general_files/sources/Commons/Program.cpp

DEFAULT := $(GENERAL) mains/main.cpp
CSV     := mains/main_csv.cpp
CPP09   := mains/main_cpp09.cpp \
           mains/cpp09_ex00/sources/line.cpp
CUB3D   := mains/main_cub3d.cpp
GNL     := mains/main_gnl.cpp
SOLONG  := mains/main_solong.cpp
TXT     := mains/main_txt.cpp

# Object file lists (hierarchy preserved)
GENERAL_OBJS := $(foreach f,$(GENERAL),$(BUILD_DIR)/$(f:.cpp=.o))
DEFAULT_OBJS := $(foreach f,$(DEFAULT),$(BUILD_DIR)/$(f:.cpp=.o))
CSV_OBJS     := $(foreach f,$(CSV),    $(BUILD_DIR)/$(f:.cpp=.o))
CPP09_OBJS   := $(foreach f,$(CPP09),  $(BUILD_DIR)/$(f:.cpp=.o))
CUB3D_OBJS   := $(foreach f,$(CUB3D),  $(BUILD_DIR)/$(f:.cpp=.o))
GNL_OBJS     := $(foreach f,$(GNL),    $(BUILD_DIR)/$(f:.cpp=.o))
SOLONG_OBJS  := $(foreach f,$(SOLONG), $(BUILD_DIR)/$(f:.cpp=.o))
TXT_OBJS     := $(foreach f,$(TXT),    $(BUILD_DIR)/$(f:.cpp=.o))

# Common reusable object files
COMMON := $(GENERAL_OBJS)

# Default target
all: default

default: $(NAME)

$(NAME): $(DEFAULT_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(NAME)_csv: $(CSV_OBJS) $(COMMON)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(NAME)_txt: $(TXT_OBJS) $(COMMON)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(NAME)_cpp09: $(CPP09_OBJS) $(COMMON)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(NAME)_cub3d: $(CUB3D_OBJS) $(COMMON)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(NAME)_gnl: $(GNL_OBJS) $(COMMON)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(NAME)_solong: $(SOLONG_OBJS) $(COMMON)
	$(CXX) $(CXXFLAGS) $^ -o $@

csv: $(NAME)_csv
txt: $(NAME)_txt
cpp09: $(NAME)_cpp09
cub3d: $(NAME)_cub3d
gnl: $(NAME)_gnl
solong: $(NAME)_solong

# Generic rule for .cpp → build/xxx.o
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rules
clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME) $(NAME)_csv $(NAME)_txt $(NAME)_cpp09 $(NAME)_cub3d $(NAME)_gnl $(NAME)_solong

re: fclean all

# Phony targets
.PHONY: all clean fclean re default csv txt cpp09 cub3d gnl solong
