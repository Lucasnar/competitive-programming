while(true)
  n = gets.to_i
  break if n == 0
  m = {}
  (0...n).each {|n| m[n] = 0}
  (0...n).each do |i|
    gets.split.each_with_index do |k, j|
      if k.to_i == 1
        m[j] += 1
      end
    end
  end
  puts m.values.max
end
