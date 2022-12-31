TARGET = kadomatsu
SRCS = main.cpp
CXX = g++
CXXFLAGS = -Wall -O2 -std=c++14

all: ${TARGET} install

${TARGET}: ${SRCS}
	@${CXX} ${CXXFLAGS} -o ${TARGET} ${SRCS}

install: ${TARGET}
	@sudo cp ${TARGET} /usr/local/bin

clean:
	@rm -f ${TARGET}

uninstall:
	@sudo rm -f /usr/local/bin/${TARGET}