import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
public class MaxInducedSubgraph {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("Please input a number n representing the number of graph node:");
		int n = input.nextInt();
		//Initiate 2-dim ArrayList as a graph matrix.
		List<List<Boolean>> graph = new ArrayList<List<Boolean>>();
		List<Integer> degree = new ArrayList<Integer>();
		for(int i = 0; i < n; i++) {
			List<Boolean> row = new ArrayList<Boolean>();
			for(int j = 0; j < n; j++) {
				row.add(false);
			}
			graph.add(row);
			degree.add(0);
		}
		//Fill in the edge and renew degree vactor.
		boolean flag = true;
		while(flag) {
			System.out.println("Input two distinct integers between 0 to n-1 representing the edge linking two nodes, single '-1' representing quit:");
			int i = input.nextInt();
			if (i == -1) break;
			int j = input.nextInt();
			graph.get(i).set(j, true);
			graph.get(j).set(i, true);
			degree.set(i, degree.get(i)+1);
			degree.set(j, degree.get(j)+1);
		}
		System.out.println("The graph matrix is:");
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				int out = graph.get(i).get(j)?1:0;
				System.out.print(out+" ");
			}
				System.out.println();
		}
		/*
		for (int i = 0; i < n; i++) {
			System.out.print(degree.get(i)+" ");
		}
		System.out.println();
		*/
		System.out.println("Input max degree k:");
		int k = input.nextInt();
		//Cut one node with degree < k and iterate until no such nodes or n<=k.
		while(true) {
			boolean isSatisfy = true;
			for(int i = 0; i < n; i++) {
				if(degree.get(i) < k) {
					isSatisfy = false;
					graph.remove(i);
					degree.remove(i);
					n--;
					for(int j = 0; j < n; j++) {
						if(graph.get(j).get(i)) {
							degree.set(j, degree.get(j)-1);
						}
						graph.get(j).remove(i);
					}
					/*
					for(int x = 0; x < n; x++) {
						for(int j = 0; j < n; j++) {
							int out = graph.get(x).get(j)?1:0;
							System.out.print(out+" ");
						}
							System.out.println();
					}
					for (int j = 0; j < n; j++) {
						System.out.print(degree.get(j));
					}
					System.out.println();
					*/
					break;
				}
			}
			if(isSatisfy || n <= k) {
				//System.out.println(n);
				break;
			}
		}
		//Print out the result.
		if(n<=k) {
			System.out.println("There is no such subgraph.");
		}
		else {
			System.out.println("The equivalence matrix of max induced graph is:");
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++) {
					int out = graph.get(i).get(j)?1:0;
					System.out.print(out+" ");
				}
					System.out.println();
			}
		}
		input.close();
	}

}
