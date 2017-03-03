object Solution {
  def f(n: Int) {
    for (i <- 0 to n - 1)
      println("Hello World")
  }
  def main(args: Array[String]) {
    f(args(0).toInt)
  }
} 
