using System.Collections.Generic;

namespace Introduction_to_Algorithms.Chapter_5
{
    public class Example_5_4
    {
        /// <summary>
        /// Example 5.4: Finding One-to-One Mappings |
        /// Algorithm Mapping
        /// </summary>
        /// <param name="f">An array of integers whose values are between 1 and n.</param>
        /// <param name="n"></param>
        /// <returns>A subset of the integers from 1 to n, such that f is one-to-one on it.</returns>
        public static int[] Algorithm_Mapping(int[] f, int n)
        {
            List<int> s = new List<int>(n);
            for (int i = 0; i < n; i++)
                s.Add(i);
            int[] c = new int[n];
            for (int i = 0; i < n; i++)
                c[f[i]]++;
            Queue<int> queen = new Queue<int>();
            for (int i = 0; i < n; i++)
                if (c[i] == 0)
                    queen.Enqueue(i);
            while (queen.Count != 0)
            {
                int i = queen.Dequeue();
                s.Remove(i);
                c[f[i]]--;
                if (c[f[i]] ==0)
                    queen.Enqueue(f[i]);
            }

            return s.ToArray();
        }
    }
}
