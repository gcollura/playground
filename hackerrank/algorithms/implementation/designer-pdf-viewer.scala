object Solution {
  def main(args: Array[String]) {
    val heights = scala.io.StdIn.readLine().split(' ').toList
    val word = scala.io.StdIn.readLine().trim
    println(word.length * word.map(a => heights(a - 'a')).max.toInt)
  }
}
