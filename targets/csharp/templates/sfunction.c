## ===== function name
${ret_type} csharp_${generator.prefix}_${class_name}_${func_name}(#slurp
## ===== parameters 
#if $min_args > 0
    #set $length = len($arguments)
    #set $index = 0
    #for $arg in $arguments
        #if $index < $length - 1 
$arg $argumtntTips[$index],#slurp
        #else 
$arg $argumtntTips[$index]#slurp
        #end if
        #set $index = $index + 1
    #end for
#end if
){
## ===== call function
#if $ret_type
    return #slurp
#end if
${class_name}::${func_name}(#slurp
#if $min_args > 0
    #set $index = 0
    #for $arg in $arguments
        #if $index < $length - 1 
$argumtntTips[$index],#slurp
        #else 
$argumtntTips[$index]#slurp
        #end if
        #set $index = $index + 1
    #end for
#end if
);
}
