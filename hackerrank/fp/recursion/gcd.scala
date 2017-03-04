object Solution {
  def gcd(x: Int, y: Int): Int = if (y == 0) x else gcd(y, x % y)

  /**This part handles the input/output. Do not change or modify it **/
  def acceptInputAndComputeGCD(pair: List[Int]) = {
    println(gcd(pair.head, pair.reverse.head))
  } 

  def main(args: Array[String]) {
    acceptInputAndComputeGCD(readLine().trim().split(" ").map(_.toInt).toList)
  }
}
