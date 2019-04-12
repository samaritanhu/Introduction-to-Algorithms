namespace Introduction_to_Algorithms.Chapter_5
{
    public class Example_5_5
    {
        /// <summary>
        /// Example 5.5: The Celebrity Problem |
        /// Algorithm Celebrity
        /// </summary>
        /// <param name="know">An n*n Boolean matrix</param>
        /// <returns>Celebrity.</returns>
        public static int Algorithm_Celebrity(bool[,] know)
        {
            int n = know.GetUpperBound(0) + 1;
            int i = 1;
            int j = 2;
            int next = 3;

            // in the first phase we eliminate all but one candidate
            while (next <= n + 1)
            {
                if (know[i - 1, j - 1])
                    i = next;
                else
                    j = next;
                next++;
                // one of either i or j is eliminated
            }

            int candidate;
            if (i == n + 1)
                candidate = j;
            else
                candidate = i;

            // Now we check that the candidate is indeed the celebrity
            bool wrong = false;
            int k = 1;
            know[candidate - 1, candidate - 1] = false;
            // a dummy variable to pass the test
            while (!wrong && k <= n)
            {
                if (know[candidate - 1, k - 1])
                    wrong = true;
                if (!know[k - 1, candidate - 1])
                    if (candidate != k)
                        wrong = true;
                k++;
            }

            if (!wrong)
                return candidate;
            else
                return 0; // no celebrity
        }
    }
}
