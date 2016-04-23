#set generator = $current_class.generator
#set isInterface = $generator.is_interface_class($current_class.class_name)
#if isInterface
    #stop
#end if
#if not $current_class.methods.has_key('constructor')
${generator.export_symbol_define}${current_class.class_name}* csharp_${generator.prefix}_${current_class.class_name}_new();
#end if
${generator.export_symbol_define}void csharp_${generator.prefix}_${current_class.class_name}_delete(${current_class.namespaced_class_name} *self);
