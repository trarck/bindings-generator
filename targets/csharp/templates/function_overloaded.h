#for func in $implementations
    #if $is_constructor
${func.func_name}* csharp_${generator.prefix}_${class_name}_new(#slurp
    #else
${func.ret_type} csharp_${generator.prefix}_${class_name}_${func.func_name}(#slurp
    #end if
## ===== self point in 
    #if not $func.static and not $func.is_constructor
${class_name}* self,#slurp
    #if $func.min_args > 0
,#slurp
    #end if
#end if
## ===== parameters 
    #if $func.min_args > 0
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