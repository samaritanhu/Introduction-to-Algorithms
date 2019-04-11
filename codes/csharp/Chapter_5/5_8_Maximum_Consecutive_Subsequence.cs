namespace Introduction_to_Algorithms.Chapter_5
{
    public class Example_5_8
    {
        /// <summary>
        /// Example 5.8: Finding the Maximum Consecutive Subsequence
        /// </summary>
        /// <param name="x">An array of size n.</param>
        /// <returns>The sum of the maximum subsequence.</returns>
        public static double Maximum_Consecutive_Subsequence(double[] x)
        {
            double globalMax = 0;
            double suffixMax = 0;
            int n = x.Length;
            for (int i = 0; i < n; i++)
            {
                if (x[i] + suffixMax > globalMax)
                {
                    suffixMax += x[i];
                    globalMax = suffixMax;
                }
                else if (x[i] + suffixMax > 0)
                    suffixMax += x[i];
                else
                    suffixMax = 0;
            }

            return globalMax;
        }
    }
}
