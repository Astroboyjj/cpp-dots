#!/bin/bash
#Compiles my project dots in c++

g++ -c dots3.cpp
g++ dots3.o -o dots3 -lsfml-graphics -lsfml-window -lsfml-system
#OUTPUT=$(g++ -c main.cpp)
#if g++ -c main.cpp;
#then
#	g++ main.o -o dots -lsfml-graphics -lsfml-window -lsfml-system
#elif [! g++ -c main.cpp];
#then
#	echo "did not compile"
#fi
#echo "done"
