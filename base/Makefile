SRC := $(wildcard src/*.cpp)
OBJ := $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))

LIB := ./lib/libtrucobase.a

ifeq ($(OS), Windows_NT)
	CFLAGS := -Wall -I include
	LFLAGS := 
	RM := rmdir /s /q obj lib
else
	CFLAGS := -Wall -I include
	LFLAGS := 
	RM := rm -rf obj/ lib/
endif

all: $(LIB)

$(LIB): $(OBJ) | lib
	ar -rcs $(LIB) $(OBJ)

obj/%.o: src/%.cpp | obj
	g++ -MD $(CFLAGS) $< -o $@ -c

-include obj/*.d

obj:
	mkdir obj

lib:
	mkdir lib

.PHONY=clean
clean:
	$(RM)

