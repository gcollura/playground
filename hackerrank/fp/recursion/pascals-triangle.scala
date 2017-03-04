object Solution {

  def factorial(n: Int): Int = if (n < 1) 1 else n * factorial(n - 1)
  def cell(n: Int, r: Int): Int = factorial(n) / (factorial(r) * factorial(n - r))

  def pascal_triangle(k: Int): List[String] = {
    (0 until k).map(a => (0 to a).map(cell(a, _)).mkString(" ")).toList
  }

  def main(args: Array[String]) {
    val k = io.Source.stdin.getLines().next().trim().toInt
    pascal_triangle(k).foreach(println)
  }
}
