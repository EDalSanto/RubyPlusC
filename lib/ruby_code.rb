require "./lib/gem_with_C_ext"

module RubyCode
  def print_foo
    ::GemWithCExt.p_wrapper("Foo")
  end
end
