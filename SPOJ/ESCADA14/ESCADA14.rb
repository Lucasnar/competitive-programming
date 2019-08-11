def upper_triangle?(leading_zeroes, max_allowed)
  leading_zeroes[1..-1].each_with_index do |n, i|
    k = i + 1
    if n < leading_zeroes[k-1]
      return false
    elsif n == leading_zeroes[k-1] && n != max_allowed
      return false
    end
  end
  true
end

coords = gets.split.map(&:to_i)

leading_zeroes = coords[0].times.map do
  gets.split.map(&:to_i).find_index {|n| n != 0} || coords[1]
end

puts upper_triangle?(leading_zeroes, coords[1]) ? "S" : "N"
