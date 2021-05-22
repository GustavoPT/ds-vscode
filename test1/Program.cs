using System;
using System.Threading;
using System.IO;

namespace test1
{

    class User{

    }
    class Piece{
        int position;
        int x;
        int y;

    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Creating a vector with 4 cells");
            double[] v = Utils.VecCreate(4, 3.5);
            Utils.VecShow(v, 3, 6);

            Console.WriteLine("Creating a 3x4 matrix");
            double[][] m = Utils.MatCreate(3, 4);
            Utils.MatShow(m, 2, 6);
            
            
            Thread th = Thread.CurrentThread;
            th.Name = "Mainthread";
            Console.WriteLine("This is {0}", th.Name);
            Console.ReadKey();
        }
    }
}
