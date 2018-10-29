# include source file that is used by Ruby C extensions to generate a Makefile
# while will correclty compile and link the C extension to Ruby and a third-party lib
require 'mkmf'
extension_name = 'gem_with_C_ext'
# generates Makefile for extension
# target_name should correspond to the name of the global function defined in C extension
# minus the Init_, i.e., Init_foo -> foo
create_makefile(extension_name)
