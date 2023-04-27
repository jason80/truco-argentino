SRC := $(wildcard src/*.cpp)
OBJ := $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))

ifeq ($(OS), Windows_NT)
	CFLAGS := -Wall -I include
	LFLAGS := 
	BIN := bin/truco-test.exe
	RM := rmdir /s /q obj bin
else
	CFLAGS := -Wall -I include -I ../base/include
	LFLAGS := -L ../base/lib -l trucobase -l cunit
	BIN := bin/truco-test
	RM := rm -rf obj/ bin/
endif

all: $(BIN)

$(BIN): $(OBJ) | bin
	$(MAKE) -C ../base
	g++ $(CFLAGS) $(OBJ) -o $(BIN) $(LFLAGS)

obj/%.o: src/%.cpp | obj
	g++ -MD $(CFLAGS) $< -o $@ -c

-include obj/*.d

obj:
	mkdir obj

bin:
	mkdir bin

.PHONY=clean
clean:
	$(MAKE) clean -C ../base
	$(RM)

ifeq ($(OS), Windows_NT)
run: $(BIN)
	$(BIN)
else
run: $(BIN)
	./$(BIN)
endif
