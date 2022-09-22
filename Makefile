CXXFLAGS = -Wall

# clean :
# 	rm main_node.o ComplexNumber.o Node.o List.o main_node

# main_node : main_node.o ComplexNumber.o Node.o List.o
# 	g++ main_node.o ComplexNumber.o Node.o List.o -o main_node

# main_node.o : main_node.cpp
# 	g++ -c $(CXXFLAGS) main_node.cpp

# ComplexNumber.o : ComplexNumber.cpp
# 	g++ -c $(CXXFLAGS) ComplexNumber.cpp

# Node.o : Node.cpp
# 	g++ -c $(CXXFLAGS) Node.cpp

# List.o : List.cpp
# 	g++ -c $(CXXFLAGS) List.cpp



# clean :
# 	rm run_test.o ComplexNumber.o Node.o List.o run_test

# run_test : run_test.o ComplexNumber.o Node.o List.o
# 	g++ -o run_test run_test.o ComplexNumber.o Node.o List.o googletest-release-1.10.0/build/lib/libgtest.a googletest-release-1.10.0/build/lib/libgtest_main.a -pthread

# run_test.o : run_test.cpp
# 	g++ -c run_test.cpp -o run_test.o -I googletest-release-1.10.0/googletest/include/ -std=c++11

# ComplexNumber.o : ComplexNumber.cpp
# 	g++ -c $(CXXFLAGS) ComplexNumber.cpp

# Node.o : Node.cpp
# 	g++ -c $(CXXFLAGS) Node.cpp

# List.o : List.cpp
# 	g++ -c $(CXXFLAGS) List.cpp
       
clean :
	rm run_test.o Character.o Mario.o Yoshi.o main.o run_test main

execute_main : main
	valgrind ./main

execute_run_test : run_test
	valgrind ./run_test

main : Character.o Mario.o Yoshi.o main.o
	g++ main.o Character.o Mario.o Yoshi.o -o main

run_test : run_test.o Character.o Mario.o Yoshi.o
	g++ -o run_test run_test.o Character.o Mario.o Yoshi.o googletest-release-1.10.0/build/lib/libgtest.a googletest-release-1.10.0/build/lib/libgtest_main.a -pthread

run_test.o : run_test.cpp
	g++ -c run_test.cpp -o run_test.o -I googletest-release-1.10.0/googletest/include/ -std=c++11

Character.o : Character.cpp
	g++ -c $(CXXFLAGS) Character.cpp

Mario.o : Mario.cpp
	g++ -c $(CXXFLAGS) Mario.cpp

Yoshi.o : Yoshi.cpp
	g++ -c $(CXXFLAGS) Yoshi.cpp

main.o : main.cpp
	g++ -c $(CXXFLAGS) main.cpp
