#for func in $implementations
${func.ret_type} csharp_${generator.prefix}_${class_name}_${func.func_name}(${class_name}* self#slurp
    #if $func.min_args > 0
,#slurp
        #set $length = len($func.arguments)
        #set $index = 0
        #for $arg in $func.arguments
            #if $index < $length - 1 
$arg $func.argumtntTips[$index],#slurp
            #else 
$arg $func.argumtntTips[$index]#slurp
            #end if
            #set $index = $index + 1
        #end for
    #end if
);
#end for