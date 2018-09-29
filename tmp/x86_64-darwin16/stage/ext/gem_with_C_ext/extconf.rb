require 'mkmf'
extension_name = 'gem_with_C_ext'
dir_config(extension_name)
create_makefile(extension_name)
