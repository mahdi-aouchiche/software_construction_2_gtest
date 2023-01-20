#ifndef __C_ECHO_HPP__
#define __C_ECHO_HPP__

#include <iostream>

/* 
  The echo function prints whatever that is given
  as an argument in the command line.
*/
std::string echo(int length, char** chars)
{ 
	std::string ret = "";
    for(int i = 1; i < length; i++) {
		ret += chars[i];
	   	if(i < length - 1) { 
			ret += " ";
	   	}
    }
    ret += "\n";
    return ret;
}

#endif  // __C_ECHO_HPP__
