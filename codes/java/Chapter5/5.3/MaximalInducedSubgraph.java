import java.util.LinkedList;
import java.util.Queue;

public class MaximalInducedSubgraph {

	// adjacencyMatrix is an n x n undirected adjacency matrix (1 if connected, 0 otherwise).
	// k is the minimum degree required of every vertex in the resulting induced subgraph.
	// Returns a boolean array where removed[i] == true means vertex i was deleted, i.e. it
	// does not belong to the maximal induced subgraph in which every remaining vertex has
	// degree >= k. If every vertex ends up removed, no such non-empty subgraph exists.
	public static boolean[] solve(int[][] adjacencyMatrix, int n, int k) {
		int[] degree = new int[n];
		boolean[] removed = new boolean[n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				degree[i] += adjacencyMatrix[i][j];
			}
		}
		Queue<Integer> queue = new LinkedList<>();
		for (int i = 0; i < n; i++) {
			if (degree[i] < k) {
				removed[i] = true;
				queue.add(i);
			}
		}
		while (!queue.isEmpty()) {
			int u = queue.poll();
			for (int v = 0; v < n; v++) {
				if (adjacencyMatrix[u][v] == 1 && !removed[v]) {
					degree[v]--;
					if (degree[v] < k) {
						removed[v] = true;
						queue.add(v);
					}
				}
			}
		}
		return removed;
	}

	public static void main(String[] args) {
		// 8 scientists 0..7. Edges mean two scientists are willing to talk to each other.
		// 0-1-2 form a triangle, 2-3 bridges to another triangle 3-4-5, and 5-6-7 is a pendant path.
		int n = 8;
		int[][] adj = {
			{0, 1, 1, 0, 0, 0, 0, 0},
			{1, 0, 1, 0, 0, 0, 0, 0},
			{1, 1, 0, 1, 0, 0, 0, 0},
			{0, 0, 1, 0, 1, 1, 0, 0},
			{0, 0, 0, 1, 0, 1, 0, 0},
			{0, 0, 0, 1, 1, 0, 1, 0},
			{0, 0, 0, 0, 0, 1, 0, 1},
			{0, 0, 0, 0, 0, 0, 1, 0}
		};
		int k = 2;
		boolean[] removed = solve(adj, n, k);
		System.out.print("Vertices in the maximal induced subgraph with degree >= " + k + ": ");
		boolean any = false;
		for (int i = 0; i < n; i++) {
			if (!removed[i]) {
				System.out.print(i + " ");
				any = true;
			}
		}
		if (!any) {
			System.out.print("none (no such subgraph exists)");
		}
		System.out.println();
	}

}
