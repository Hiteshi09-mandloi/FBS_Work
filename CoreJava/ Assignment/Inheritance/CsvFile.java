package inheritance_3;

public class CsvFile extends Documents {
	
	public CsvFile() {
	
		// TODO Auto-generated constructor stub
		super("report",45,2);
		this.NoOfRow = 100;
		this.NoOfCol =10;
	}
	
	int NoOfRow;
	int NoOfCol;
	public CsvFile(String name,int size,int p ,int noOfRow, int noOfCol) {
		super(name,size,p);
		NoOfRow = noOfRow;
		NoOfCol = noOfCol;
	}
	public int getNoOfRow() {
		return NoOfRow;
	}
	public void setNoOfRow(int noOfRow) {
		NoOfRow = noOfRow;
	}
	public int getNoOfCol() {
		return NoOfCol;
	}
	public void setNoOfCol(int noOfCol) {
		NoOfCol = noOfCol;
	}
	
	void display() {
		super.display();
		System.out.println("No of Row: "+NoOfRow);
		System.out.println("No Of Col"+NoOfCol);
	}
	
	

}
