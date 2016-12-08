﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SWIGDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello world! (C#)");
            BasicObject obj = new BasicObject();
            obj.sayHello();
            Console.WriteLine("{0}", obj.multiply(3, 2));
            Console.WriteLine("{0}", obj.getBackFirstChar("Hats"));

            Console.WriteLine("Before setting, number is {0}", obj.getNumber());
            obj.setNumber(3);
            Console.WriteLine("After setting, number is {0}", obj.getNumber());
            Console.WriteLine("Static retrieval => number is {0}", BasicObject.getNumberStatic(obj));

            IntVector vec = new IntVector();
            vec.Add(3);
            vec.Add(-1);
            vec.Add(19);
            vec.Add(4);
            Console.WriteLine("Sum of nums is {0}", obj.getSum(vec));
        }
    }
}
