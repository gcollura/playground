object Solution {
  def countCommonChars(s: String, t: String, offset: Int = 0): Int =
    if (offset >= (s.length min t.length) || s(offset) != t(offset))
      0
    else
      1 + countCommonChars(s, t, offset + 1)

  def hasPossibleTransformation(s: String, t: String, k: Int): Boolean =
    if (s.length + t.length <= k) {
      true
    } else {
      val commonChars = countCommonChars(s, t)
      val operations = k - (s.length - commonChars) - (t.length - commonChars)
      if (operations >= 0 && operations % 2 == 0) true else false
    }

  def main(args: Array[String]) {
    val s = scala.io.StdIn.readLine.trim.toString
    val t = scala.io.StdIn.readLine.trim.toString
    val k = scala.io.StdIn.readInt
    if (hasPossibleTransformation(s, t, k)) println("Yes") else println("No")
  }
}
