#if $current_class.methods.has_key('constructor')
#set has_constructor = True
#set constructor = $current_class.methods.constructor
${current_class.methods.constructor.generate_code($current_class)}
#end if
#set generator = $current_class.generator
void csharp_${generator.prefix}_${current_class.class_name}_delete(${current_class.class_name} *self)
{
    if(self!=NULL){
        delete self;
    }
}
