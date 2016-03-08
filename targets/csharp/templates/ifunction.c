## ===== function name
${ret_type} csharp_${generator.prefix}_${class_name}_${func_name}(${namespaced_class_name}* self#slurp
## ===== parameters 
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
){
## ===== check parameters
    if(self==NULL)
    {
        printf("${class_name}::${func_name} self is NULL");
    }
## ===== call function
#if $ret_type
    return #slurp
#end if
self->${func_name}(#slurp
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
