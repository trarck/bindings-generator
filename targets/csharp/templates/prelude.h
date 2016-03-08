#set generator = $current_class.generator
#if not $current_class.methods.has_key('constructor')
${generator.export_symbol_define}${current_class.class_name}* csharp_${generator.prefix}_${current_class.class_name}_new();
#end if
${generator.export_symbol_define}void csharp_${generator.prefix}_${current_class.class_name}_delete(${current_class.class_name} *self);
