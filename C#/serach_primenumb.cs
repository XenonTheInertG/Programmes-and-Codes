using System;
using System.Linq;
namespace exercises
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 120;
            Console.WriteLine("Original number: " + n);
            Console.WriteLine("Next prime number/Current prime number: " + test(n));
            n = 321;
            Console.WriteLine("\nOriginal number: " + n);
            Console.WriteLine("Next prime number/Current prime number: " + test(n));
            n = 43;
            Console.WriteLine("\nOriginal number: " + n);
            Console.WriteLine("Next prime number/Current prime number: " + test(n));
            n = 4433;
            Console.WriteLine("\nOriginal number: " + n);
            Console.WriteLine("Next prime number/Current prime number: " + test(n)); ;
        }
        public static int test(int n)
        {
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0) { n++; i = 2; }
            }
            return n;
        }
    }
}
