object Solution {
  def fibonacci(x: Int): Int =
    if (x == 2 || x == 1) x - 1 else fibonacci(x - 1) + fibonacci(x - 2)

  def main(args: Array[String]) {
    /** This will handle the input and output**/
    println(fibonacci(readInt()))
  }
}
