object Solution {
  def f(arr: List[Int]): Int = arr.foldLeft(0) { (a, _) => a + 1 }
  def main(args: Array[String]) {
    println(f(io.Source.stdin.getLines().map(_.toInt).toList))
  }
}
