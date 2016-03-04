\#include "${out_file}.hpp"
#if $macro_judgement
$macro_judgement
#end if 

#if $cpp_headers
#for header in $cpp_headers
\#include "${header}"
#end for
#end if 
