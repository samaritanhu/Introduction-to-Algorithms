using System;

namespace Introduction_to_Algorithms.Chapter_6
{
    public class Example_6_2
    {
        /// <summary>
        /// Example 6.2.1: Pure Binary Search
        /// </summary>
        /// <param name="x">A sorted array in the range 1 to n.</param>
        /// <param name="z">The search key.</param>
        /// <returns>Position (0 if no such index exist).</returns>
        public static int Binary_Search(int[] x, int z)
        {
            int Find(int left, int right)
            {
                if (left == right)
                {
                    if (x[left - 1] == z)
                        return left;

                    return 0;
                }

                int middle = (int)Math.Ceiling((left + right) / 2.0);
                if (z < x[middle - 1])
                    return Find(left, middle - 1);

                return Find(middle, right);
            }
            return Find(1, x.Length);
        }

        /// <summary>
        /// Example 6.2.2: Binary Search in a Cyclic Sequence
        /// </summary>
        /// <param name="x">A cyclically sorted array in the range 1 to n of distinct elements.</param>
        /// <returns>Position (the index of the minimal element in x).</returns>
        public static int Cyclic_Binary_Search(int[] x)
        {
            int CyclicFind(int left, int right)
            {
                if (left == right)
                    return left;

                int middle = (left + right) / 2;
                if (x[middle - 1] < x[right - 1])
                    return CyclicFind(left, middle);

                return CyclicFind(middle + 1, right);
            }
            return CyclicFind(1, x.Length);
        }

        /// <summary>
        /// Example 6.2.3: Binary Search for a Special Index
        /// </summary>
        /// <param name="x">A sorted array in the range 1 to n of distinct integers.</param>
        /// <returns>Position (the index satisfying x[Position] = Position, or 0 if no such index exists).</returns>
        public static int Special_Binary_Search(int[] x)
        {
            int SpecialFind(int left, int right)
            {
                if (left == right)
                {
                    if (x[left - 1] == left)
                        return left;

                    return 0;
                }
                int middle = (left + right) / 2;
                if (x[middle - 1] < middle)
                    return SpecialFind(middle + 1, right);

                return SpecialFind(left, middle);
            }

            return SpecialFind(1, x.Length);
        }
    }
}
