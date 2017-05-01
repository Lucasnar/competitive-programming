defmodule Solution do
  defp gets_int() do
    IO.gets("") |> Integer.parse |> elem(0)
  end

  defp get_prices([q | v], n) do
    [q * Enum.at(v, 0) | get_prices(n-1)]
  end

  defp get_prices(0) do
    []
  end

  defp get_prices(n) do
    get_prices(IO.gets("")
               |> String.strip
               |> String.split(" ")
               |> Enum.map(&(String.to_integer(&1))),
               n
    )
  end

  defp result(final_sum) do
    gets_int() - final_sum
  end

  defp print_result(result) when result < 0 do
    IO.puts("DINHEIRO INSUFICIENTE")
  end

  defp print_result(result) do
    IO.puts(result)
  end

  defp test_cases(0), do: nil

  defp test_cases(t) do
    get_prices(gets_int())
    |> Enum.reduce(0, &+/2)
    |> result
    |> print_result
    test_cases(t-1)
  end

  def main() do
    test_cases(gets_int())
  end
end

Solution.main()
