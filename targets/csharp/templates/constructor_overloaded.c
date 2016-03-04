#for func in $implementations
## ===== function name
${class_name}* csharp_${generator.prefix}_${class_name}_new(#slurp
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
){
## ===== call function
    return new ${class_name}(#slurp
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

#end for