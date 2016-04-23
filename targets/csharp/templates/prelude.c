#set generator = $current_class.generator
#set isInterface = $generator.is_interface_class($current_class.class_name)
#if isInterface
    #stop
#end if
#if $current_class.methods.has_key('constructor')
#set has_constructor = True
#set constructor = $current_class.methods.constructor
${current_class.methods.constructor.generate_code($current_class)}
#else
##=======default constructor
${current_class.namespaced_class_name}* csharp_${generator.prefix}_${current_class.class_name}_new()
{
    return new ${current_class.namespaced_class_name}();
}
#end if
void csharp_${generator.prefix}_${current_class.class_name}_delete(${current_class.namespaced_class_name} *self)
{
    if(self!=NULL){
        delete self;
    }
}
