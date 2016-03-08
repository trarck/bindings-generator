\#include "${out_file}.hpp"
\#include <math.h>
\#include <string.h>
\#include <stdarg.h>
\#include <stdio.h>
\#include <stdlib.h>
\#include <time.h>
#if $macro_judgement
$macro_judgement
#end if 

#if $cpp_headers
#for header in $cpp_headers
\#include "${header}"
#end for
#end if 
