object Solution {
  // This function will be used while invoking "Summation" to compute
  // The area under the curve.
  def f(coefficients: List[Int], powers: List[Int], x: Double): Double = {
    // To compute the value of the function
    // For the given coefficients, powers and value of x
    (coefficients zip powers).map(a => a._1 * math.pow(x, a._2)).sum
  }

  // This function will be used while invoking "Summation" to compute
  // The Volume of revolution of the curve around the X-Axis
  // The 'Area' referred to here is the area of the circle obtained
  // By rotating the point on the curve (x,f(x)) around the X-Axis
  def area(coefficients: List[Int], powers: List[Int], x: Double): Double = {
    // To compute the area of the circle on revolving the point
    // (x,f(x)) around the X-Axis
    // For the given coefficients, powers and value of x
    math.Pi * math.pow(f(coefficients, powers, x), 2)
  }

  // This is the part where the series is summed up. This function is invoked
  // once with func = f to compute the area under the curve. Then it is invoked
  // again with func = area to compute the volume of revolution of the curve
  def summation(func: (List[Int], List[Int], Double) => Double, upperLimit: Int, lowerLimit: Int, coefficients: List[Int], powers: List[Int]): Double = {
    (lowerLimit.toDouble to upperLimit.toDouble by 0.001).map(0.001 * func(coefficients, powers, _)).sum
  }

  def displayAnswers(coefficients: List[Int], powers: List[Int], limits: List[Int]) {
    println(summation(f, limits.reverse.head, limits.head, coefficients, powers))
    println(summation(area, limits.reverse.head, limits.head, coefficients, powers))
  }

  def main(args: Array[String]) {
    val lines = io.Source.stdin.getLines()
    displayAnswers(
      lines.next().trim().split(" ").toList.map(_.toInt),
      lines.next().trim().split(" ").toList.map(_.toInt),
      lines.next().trim().split(" ").toList.map(_.toInt)
    )
  }
}
