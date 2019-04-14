using System;
using System.Collections.Generic;
using System.Text;

namespace Introduction_to_Algorithms.Chapter_6
{
    public class Example_6_5_2
    {
        public static int Selection(int[] x, int k)
        {
            if (k < 1 || k > x.Length)
                throw new IndexOutOfRangeException();

            int Partition(int left, int right)
            {
                int pivot = x[left - 1];
                while (left < right)
                {
                    while (left < right && x[--right - 1] >= pivot)
                        x[left - 1] = x[right - 1];
                    while (left < right && x[++left - 1] <= pivot)
                        x[right - 1] = pivot;
                }

                x[left - 1] = pivot;

                return left;
            }

            int Select(int left, int right, int k2)
            {
                if (left == right)
                    return left;
                int middle = Partition(left, right);
                if (middle - left + 1 >= k2)
                    return Select(left, middle, k2);
                return Select(middle + 1, right, k2 - (middle - left + 1));
            }

            int posi = Select(1, x.Length, k);
            return x[posi - 1];
        }
    }
}
