namespace Introduction_to_Algorithms.Chapter_5
{
    public class Example_5_2
    {
        /// <summary>
        /// Polynomial Evaluation
        /// </summary>
        /// <param name="a">Coefficient of polynomial</param>
        /// <param name="x">Real number</param>
        /// <returns>The result of x in polynomial</returns>
        public static double PolynomialEvaluation(double[] a, double x)
        {
            int n = a.Length;
            double p = a[n - 1];
            for (int i = 1; i < n; i++)
            {
                p = x * p + a[n - i - 1];
            }

            return p;
        }
    }
}
