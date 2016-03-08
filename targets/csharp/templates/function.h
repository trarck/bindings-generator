## ===== function name
#if $is_constructor
${generator.export_symbol_define}${class_name}* csharp_${generator.prefix}_${class_name}_new(#slurp
#else
${generator.export_symbol_define}${ret_type} csharp_${generator.prefix}_${class_name}_${func_name}(#slurp
#end if
## ===== self point in 
#if not $static and not $is_constructor
${class_name}* self#slurp
    #if $min_args > 0
,#slurp
    #end if
#end if
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
);
