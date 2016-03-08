## ===== function name
${namespaced_class_name}* csharp_${generator.prefix}_${class_name}_new(#slurp
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
    return new ${namespaced_class_name}(#slurp
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
