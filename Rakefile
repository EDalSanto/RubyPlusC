# Rakefile

require 'rake/extensiontask'
spec = Gem::Specification.load('gem_with_C_ext.gemspec')
Rake::ExtensionTask.new('gem_with_C_ext', spec)
