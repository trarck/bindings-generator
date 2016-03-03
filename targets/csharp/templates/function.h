${ret_type} csharp_${generator.prefix}_${class_name}_${func_name}(${class_name}* self#slurp
#if $min_args > 0
,#slurp
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
);
