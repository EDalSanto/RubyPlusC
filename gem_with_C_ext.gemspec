Gem::Specification.new do |s|
  s.name    = "gem_with_C_ext"
  s.version = "0.0.1"
  s.summary = "C and Ruby, what what"
  s.author  = "Eddie Dal Santo"

  s.files = Dir.glob("ext/**/*.{c,rb}") +
            Dir.glob("lib/**/*.rb")

  s.extensions << "ext/gem_with_C_ext/extconf.rb"

  s.add_development_dependency "rake-compiler"
end
