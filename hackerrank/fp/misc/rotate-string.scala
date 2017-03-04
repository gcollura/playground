object Solution {
  def rotation(str: String) = { str.drop(1) + str.charAt(0) }
  def rotations(str: String, n: Int): List[String] = {
    if (n > 0) str :: rotations(rotation(str), n - 1) else Nil
  }

  def getRotations(str: String): List[String] = {
    rotations(rotation(str), str.length)
  }

  def main(args: Array[String]) {
    val lines = io.Source.stdin.getLines().drop(1)
    lines.map(a => getRotations(a.trim()).mkString(" ")).foreach(println)
  }
}
