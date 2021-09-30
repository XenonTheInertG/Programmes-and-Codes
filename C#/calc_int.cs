using System;
using System.Collections.Generic;

public class Exercise19 {
  static void Main(string[] args)
        {
            Console.WriteLine(SumTriple(2,2));
            Console.WriteLine(SumTriple(12,10));
            Console.WriteLine(SumTriple(-5,2));          
        }
        public static int SumTriple(int a, int b)
        {
            return a == b ? (a + b)*3 : a + b;
        }
}
