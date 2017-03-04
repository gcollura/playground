object Solution {
 def f(arr: List[Int]): Int = arr.foldLeft(0) { 
   (a, b) => if (b % 2 != 0) a + b else a
 }
 def main(args: Array[String]) { } 
}
