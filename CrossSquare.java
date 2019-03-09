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
				if(i==0 || i==inputlen-1 || j == 0 || j == inputlen-1) { // ó��, ��, �� ��
					squareArray[i][j] = "*";
				}
				if(i>=1 && j>=1){ // ����
					
					maxTerm = maxTerm + inputterm;
					
					if(maxTerm > inputlen-1) { // ���ݰ� ���� index�� ���� ���� �迭ũ�� �̻��� ��,
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
		
		System.out.println("���簢���� �� ���� ���̸� �Է��ϼ���.");
		inputlen = sc.nextInt();
		System.out.println("������ ������ �Է��ϼ���.");
		inputterm = sc.nextInt();

		CrossSquare cs = new CrossSquare();
		cs.make_square(inputlen, inputterm);
	}
}
