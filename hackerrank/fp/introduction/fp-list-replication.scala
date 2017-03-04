object Solution {
  def repeat[T](num: Int, e: T): List[T] =
    if (num <= 0) Nil else e :: repeat(num - 1, e);

  def f(num:Int, arr: List[Int]): List[Int] =
    arr.flatMap(repeat(num, _))

  def main(args: Array[String]) {
    f(args(0).toInt, args.drop(1).map(_.toInt).toList).map(println _)
  }
}
