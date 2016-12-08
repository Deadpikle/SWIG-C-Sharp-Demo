%module swigdemolib
 
%{
    #include "SWIGDemo.h"
%}
 
%include <windows.i>
%include <std_string_original.i>
%include <std_vector.i>

%include "SWIGDemo.h"

%template(IntVector) std::vector<int>;