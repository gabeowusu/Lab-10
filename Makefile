CXX = g++
CFLAGS = -std=c++17 -Wall -g
LDFLAGS = -lm
ALL: main

rectBlocks.o : rectBlocks.cpp block.h
    ${CXX} ${CFLAGS} -c rectBlocks.cpp

sqrBaseRectBlocks.o : sqrBaseRectBlocks.cpp block.h
    ${CXX} ${CFLAGS} -c sqrBaseRectBlocks.cpp

cubiodBlocks.o : cubiodBlocks.cpp block.h
    ${CXX} ${CFLAGS} -c cubiodBlocks.cpp

cylindricalBlocks.o : cylindricalBlocks.cpp block.h
    ${CXX} ${CFLAGS} -c cylindricalBlocks.cpp

sphericalBlocks.o : sphericalBlocks.cpp block.h
    ${CXX} ${CFLAGS} -c sphericalBlocks.cpp

main.o : main.cpp block.h
    ${CXX} ${CFLAGS} -c main.cpp

main : block.h rectBlocks.o sqrBaseRectBlocks.o cubiodBlocks.o cylindricalBlocks.o sphericalBlocks.o main.o
    ${CXX} ${CFLAGS} rectBlocks.o sqrBaseRectBlocks.o cubiodBlocks.o cylindricalBlocks.o sphericalBlocks.o main.o\
    -o ALL ${LDFLAGS}

clean :
${RM} -r *.o main
