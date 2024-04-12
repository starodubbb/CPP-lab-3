%module mylib
%include "std_string.i"

%{
#include "class_mylib.h"
%}

using namespace std;

%include class_mylib.h