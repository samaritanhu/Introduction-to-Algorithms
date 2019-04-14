using System;

namespace Introduction_to_Algorithms.Chapter_6
{
    public class Example_6_3
    {
        /// <summary>
        /// Example 6.3: Interpolation Search
        /// </summary>
        /// <param name="x">A sorted array in the range 1 to n.</param>
        /// <param name="z">The search key.</param>
        /// <returns>Position (0 if no such index exist).</returns>
        public static int Interpolation_Search(int[] x, int z)
        {
            if (x[0] > z || x[x.Length - 1] < z)
                return 0;

            int IntFind(int left, int right)
            {
                if (x[left - 1] == z)
                    return left;
                if (left == right || x[left - 1] == x[right - 1])
                    return 0;
                int nextGuess = left + (int)Math.Round((z - x[left - 1]) * (right - left) / (double)(x[right - 1] - x[left - 1]));
                if (z < x[nextGuess - 1])
                    return IntFind(left, nextGuess - 1);
                return IntFind(nextGuess, right);
            }

            return IntFind(1, x.Length);
        }
    }
}
