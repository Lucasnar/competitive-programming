t=gets.to_i;t.times{|i|a=[];d,n=gets.split.map(&:to_f);n.to_i.times{k,s=gets.split.map(&:to_f);a<<(d-k)/s};puts "Case ##{i+1}: #{'%.6f'%(d/a.max)}"}
