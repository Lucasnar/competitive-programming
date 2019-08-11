puts gets.split.map(&:to_f).sort[1..-2].inject(:+).round(2)
