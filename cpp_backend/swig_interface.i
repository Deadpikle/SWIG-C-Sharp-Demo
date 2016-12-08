%module(directors="1") swigdemolib
 
%{
    #include "SWIGDemo.h"
%}
 
%include <windows.i>
%include <std_string_original.i>
%include <std_vector.i>

%feature("director") CallbackObj;
%template(IntVector) std::vector<int>;

%include "SWIGDemo.h"

