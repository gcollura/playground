object Solution {
  def factorial(x: Int): Int = if (x == 0) 1 else x * factorial(x - 1)

  def exp(x: Double): Double =
    (0 to 9).foldLeft(0.0) { (a, b) => a + math.pow(x, b) / factorial(b) }

  def main(args: Array[String]) {
    io.Source.stdin.getLines().drop(1).foreach(a => println(exp(a.toDouble)))
  }
}
