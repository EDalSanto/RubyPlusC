// defines all C calls possible in ruby
#include <ruby.h>

// Allocate two VALUE variables to hold the modules we'll create. Ruby values
// are all of type VALUE. Qnil is the C representation of Ruby's nil.
VALUE GemWithCExt = Qnil;

// Declare a couple of functions. The first is initialization code that runs
// when this file is loaded, and the second is the actual business logic we're
// implementing.
void Init_gem_with_C_ext();
VALUE method_p_wrapper(VALUE self, VALUE string);

// Initial setup function, takes no arguments and returns nothing. Some API
// notes:
//
// * rb_define_module() creates and returns a top-level module by name
//
// * rb_define_singleton_method() take a module, the method name, a reference to
//   a C function, and the method's arity, and exposes the C function as a
//   single method on the given module
//
void Init_gem_with_C_ext() {
  GemWithCExt = rb_define_module("GemWithCExt");
  rb_define_singleton_method(GemWithCExt, "p_wrapper", method_p_wrapper, 1);
}

// The business logic -- this is the function we're exposing to Ruby. It returns
// a Ruby VALUE, and takes two VALUE arguments: the receiver object, and the
// method parameters. Notes on APIs used here:
//
// * rb_p(VALUE) -> implements ruby p
//
VALUE method_p_wrapper(VALUE self, VALUE string) {
  rb_p(string);

  return Qnil;
}
