#if $macro_judgement
$macro_judgement
#end if 
\#ifndef __${prefix}_h__
\#define __${prefix}_h__

#if $hpp_headers
#for header in $hpp_headers
\#include "${header}"
#end for
#end if 
#for header in $headers
    #set include_header = os.path.basename(header)
    #if $replace_headers.has_key(include_header)
\#include "${replace_headers[include_header]}"
    #else
\#include "${include_header}"
    #end if
#end for

\#ifdef __cplusplus
extern "C" {
\#endif    
