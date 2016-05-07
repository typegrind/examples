require 'json'
JSON.parse(File.read('compile_commands.json')).each do |entry|
  p entry['file']
  puts "====="
  puts `../build/vendor/llvm/bin/clang-typegrind #{entry['file']} 2>&1`
end
