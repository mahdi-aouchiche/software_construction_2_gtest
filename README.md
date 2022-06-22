# introduction to gtest (google testing) 
- This lab focuses on how Google Unit Test works.
- Gtest checks a class or a code for its correct functionality by checking edge cases and verify if we get the desired output it intends to do before implimenting it to the rest of the project.
- To use the gtest submodule, we need to clone the open source GitHub repository, this allows us to use up to date gtest version:
  - $ git submodule add https://github.com/google/googletest.git
- To add more tests check the test.cpp in the src folder. 
- The CMakeList.txt is modified to acknowledge the googletest module and setup the libraries and dependencies, there for to run the lab and see the results of the unit test use the commands:
  $ mkdir build
  $ cd build
  $ cmake ..
  $ make
  $ ./test
- The 5 tests all pass, but some added tests might fail.
