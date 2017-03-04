object Solution {
  def f(delim: Int, arr: List[Int]): List[Int] =
    arr.flatMap(a => if (a < delim) List(a) else Nil)
  def main(args: Array[String]) { }
} 
