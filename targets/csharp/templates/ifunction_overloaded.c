#set $idx = 0
#for func in $implementations
## ===== function name
${func.ret_type} csharp_${generator.prefix}_${class_name}_${func.func_name}_${idx}(${class_name}* self#slurp
## ===== parameters 
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
){
## ===== check parameters
    if(self==NULL)
    {
        printf("${class_name}::${func_name} self is NULL");
    }
## ===== call function
    #if $func.ret_type
    return #slurp
    #end if
self->${func.func_name}(#slurp
    #if $func.min_args > 0
        #set $index = 0
        #for $arg in $func.arguments
            #if $index < $length - 1 
$func.argumtntTips[$index],#slurp
            #else 
$func.argumtntTips[$index]#slurp
            #end if
            #set $index = $index + 1
        #end for
    #end if
);
}

    #set $idx = $idx + 1
#end for