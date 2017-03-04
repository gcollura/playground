object Solution {
  def f(arr: List[Int]): List[Int] = arr.map(math.abs _)
  def main(args: Array[String]) {
    println(f(io.Source.stdin.getLines().map(_.toInt).toList))
  }
}
