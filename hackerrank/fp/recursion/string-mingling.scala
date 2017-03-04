object Solution {
  def mingle(p: String, q: String): String = {
    (p zip q).map(a => a._1.toString + a._2.toString).mkString
  }

  def main(args: Array[String]) {
    val lines = io.Source.stdin.getLines()
    println(mingle(lines.next().trim(), lines.next().trim()))
  }
}
