object Solution {
  def fix(grade: Int): Int =
    if (grade % 5 >= 3 && grade + 2 >= 40) grade + 5 - (grade % 5) else grade

  def main(args: Array[String]) {
    val n = scala.io.StdIn.readInt

    1 to n foreach { _ => 
      val grade = scala.io.StdIn.readInt
      println(fix(grade))
    }
  }
}
