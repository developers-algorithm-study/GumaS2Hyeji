import java.util.Scanner;

public class CrossSquare {

	public void make_square(int inputlen, int inputterm) {
		String[][] squareArray = new String[inputlen][inputlen]; 
		int i, j;
		int sum=0;
		int cnt=0;
		int maxTerm = 0;
		int tmp;
		
		for(i = 0; i<inputlen; i++) {
			for(j = 0; j<inputlen; j++) {
				squareArray[i][j] = " ";
				squareArray[1][1] = "*";
				if(i==0 || i==inputlen-1 || j == 0 || j == inputlen-1) { // 처음, 끝, 양 옆
					squareArray[i][j] = "*";
				}
				if(i>=1 && j>=1){ // 빗금
					
					maxTerm = maxTerm + inputterm;
					
					if(maxTerm > inputlen-1) { // 간격과 원래 index를 더한 값이 배열크기 이상일 때,
						maxTerm -= inputlen;
						
						maxTerm -= 2;
						tmp = j;
						j = maxTerm;

						squareArray[i][j] = "*";
						
						System.out.print(squareArray[i][j]);
						maxTerm = j;
					    j = tmp;
					}
					else {
					System.out.print(squareArray[i][j]);
					
					}
					squareArray[i][j] = "*";

				}
				else { 
					System.out.print(squareArray[i][j]);
				}
				cnt++;
				if(cnt % 10 == 0) {
					System.out.println();
				}
			}
		}	
	}
	
	public static void main(String[] args) {
		int inputlen, inputterm;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("정사각형의 한 변의 길이를 입력하세요.");
		inputlen = sc.nextInt();
		System.out.println("빗줄의 간격을 입력하세요.");
		inputterm = sc.nextInt();

		CrossSquare cs = new CrossSquare();
		cs.make_square(inputlen, inputterm);
	}
}
