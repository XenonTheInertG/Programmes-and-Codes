using System;
class Program
{
    static void Main()
    {       
        int[] arr = new int[100];
        int i, num;
 
        //Enter size of array
        Console.WriteLine("Enter size of the array: ");
        num = Convert.ToInt32(Console.ReadLine());
 
        //Reading elements of array
        Console.WriteLine("Enter elements in array: ");        
        for(i=0; i<num; i++)
        {
            arr[i] = Convert.ToInt32(Console.ReadLine());            
        }
 
        Console.WriteLine("All negative elements in array are: ");            
        for(i=0; i<num; i++)
        {
            //Printing negative elements
            if(arr[i] < 0)
            {
                Console.WriteLine(arr[i]);    
            }
        }
        Console.ReadLine();
    }
 
}
