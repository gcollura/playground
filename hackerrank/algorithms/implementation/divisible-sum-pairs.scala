object Solution {
  // buckets solution
  def main(args: Array[String]) {
    val stdin = scala.io.StdIn
    val List(n, k) = stdin.readLine().split(' ').map(_.toInt).toList
    val a = stdin.readLine().split(' ').map(_.toInt).toList
    val buckets = new Array[Int](k)
    var count = 0
    a.foreach { i =>
      val mod = i % k
      count += buckets((k - mod) % k)
      buckets(mod) += 1
    }
    println(count)
  }
}
