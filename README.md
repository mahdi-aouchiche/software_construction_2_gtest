# Software Construction: Introduction to Gtest (Google testing)

Author: Mahdi Aouchiche (<https://github.com/mahdi-aouchiche/software_construction_2_gtest>)

* Introduction to Google Unit Test.
* Gtest checks a class or a code for its correct functionality by checking edge cases and verify if we get the desired output it intends to do before implementing it to the rest of the project.
* To use the gtest submodule, we need to clone the open source GitHub repository, this allows us to use up to date gtest version:

```c++
git submodule add https://github.com/google/googletest.git
```

* To add more tests check the "test.cpp" in the src folder.
* The "CMakeList.txt" is modified to acknowledge the googletest module and setup the libraries and dependencies, therefore to run the lab and see the results of the unit test use the following commands.

## To run the project nicely run the following commands

```c++
cmake -S . -B build
cmake --build build/
```

## 5 executables are created, use one of the commands to run an executable  

```c++
// lab1  executables
./build/hello_world
./build/area_calculator
./build/standard_area_calculator

// lab2 executables 
./build/c-echo <input to be printed>
./build/lab2_tests
```
