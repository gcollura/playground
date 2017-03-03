object Solution {
  def f(num: Int, arr: List[Int]) : List[Int] {
  }
  def main(args: Array[String]) {
    var n = io.Source.stdin.getLines().take(1).toInt
    println(io.Source.stdin.getLines().take(n).map(_.toInt).sum)
  }
}
