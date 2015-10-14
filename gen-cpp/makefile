# source files.
SRC = comProto_constants.cpp comProto_types.cpp distData.cpp
 
OBJ = $(SRC:.cpp=.o)
 
OUT = ../libutils.a
 
# include directories
INCLUDES = -I. -I. -I/usr/local/include 
 
# C++ compiler flags (-g -O2 -Wall)
CCFLAGS = -g -MD -MP -std=c++0x -Wall -c
 
# compiler
CCC = g++
 
# library paths
LIBS = -L/usr/local/lib  
 
# compile flags
LDFLAGS = -g
 
.SUFFIXES: .cpp
 
default: $(OUT)
 
.cpp.o:
	$(CCC) $(INCLUDES) $(CCFLAGS)  $< -o $@
 
$(OUT): $(OBJ)
	ar rcs $(OUT) $(OBJ)
 
#depend: dep
 
#dep:
#	makedepend -- $(CFLAGS) -- $(INCLUDES) $(SRC)
 
clean:
	rm -f $(OBJ) $(OUT) Makefile.bak
	
-include $(DEPS:%.o=%.d)
