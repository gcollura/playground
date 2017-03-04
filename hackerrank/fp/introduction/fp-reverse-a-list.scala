object Solution {
  def f(arr: List[Int]): List[Int] =
    if (arr.isEmpty) Nil else f(arr.drop(1)) :+ arr(0)
  def main(args: Array[String]) { }
}
