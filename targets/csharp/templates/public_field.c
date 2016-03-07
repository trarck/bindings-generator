## ===== field set function
void csharp_${generator.prefix}_${class_name}_${name}_set(${class_name}* self,${ntype} value)
{
    self->${name}=value;
}

## ===== field get function
${ntype} csharp_${generator.prefix}_${class_name}_${name}_set(${class_name}* self)
{
    return self->${name};
}