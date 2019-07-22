class GraphSet
  def initialize(size)
    @size = size
    #puts "size #{size}"
    @graphs = Array.new(@size) { [] }
    @visited = Array.new(@size)
  end

  def add(a, b)
    a -= 1
    b -= 1
    @graphs[a] << b
    @graphs[b] << a
  end

  def number_of_graphs
    @number_of_graphs ||=
      (0...@size).reduce(0) do |acc, v|
        if visited?(v)
          acc
        else
          visit(v)
          acc + 1
        end
      end
  end

  private

  def visit_dfs(v) # stack level too deep
    return if visited?(v)

    @visited[v] = true

    @graphs[v].each { |w| visit(w) }
  end

  def visit(v) # bfs
    q = [v]

    while(q.any?) do
      current = q.shift

      @graphs[current].each do |neighbor|
        unless visited?(neighbor)
          @visited[neighbor] = true
          q << neighbor
        end
      end
    end
  end

  def visited?(v)
    @visited[v]
  end
end

n,m=gets.split.map(&:to_i)

graph_set = GraphSet.new(n)

m.times { graph_set.add(*gets.split.map(&:to_i)) }

p graph_set.number_of_graphs
