/**
 * File: parser.h
 * Functions that hadle the input and variable assignments
 * Source: MAC0122 - University of São Paulo
 * Repository: https://github.com/luizsol/MAC0122
 * Author: Luiz Sol (luizedusol@gmail.com)
 * Date: 2016/04/30
 */

#ifndef ERROR
	#define ERROR 	1
#endif

#ifndef OK
	#define OK	0
#endif

//! Funcion responsible for haldling input
/*!
  \param argc the number of arguments passed to the main funcion
  \param argv the arguments passed to the main funcion
  \return 0 if the input was invalid
*/
extern int read_params(int argc, char ** argv);
