object Solution {
  def gcd(a: Int, b: Int): Int = if (b == 0) a else gcd(b, a % b)
  def lcm(a: Int, b: Int): Int = (a * b) / gcd(a, b)

  def main(args: Array[String]) {
    val stdin = scala.io.StdIn
    val List(n, m) = stdin.readLine().split(' ').map(_.toInt).toList
    val a = stdin.readLine().split(' ').map(_.toInt).toList
    val b = stdin.readLine().split(' ').map(_.toInt).toList
    val aLcm = a.reduce(lcm)
    val bGcd = b.reduce(gcd)
    println((1 to (bGcd / aLcm)).filter(i => bGcd % (aLcm * i) == 0).size)
  }
}
