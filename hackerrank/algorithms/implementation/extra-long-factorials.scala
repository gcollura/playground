object Solution {
  def factorial(n: BigInt): BigInt =
    if (n <= 1) 1 else n * factorial(n - 1)

  def main(args: Array[String]) {
    val n = scala.io.StdIn.readInt
    println(factorial(BigInt(n)))
  }
}
