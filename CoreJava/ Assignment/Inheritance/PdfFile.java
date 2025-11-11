package inheritance_3;

public class PdfFile extends Documents{
	
	int noOfParagrafh;
	public PdfFile() {
	
		super("report2",44,10);
		this.noOfParagrafh=300;
	}

	public PdfFile(String name,int size,int p ,int noOfParagrafh) {
		super(name,size,p);
		this.noOfParagrafh = noOfParagrafh;
	}

	public int getNoOfParagrafh() {
		return noOfParagrafh;
	}

	public void setNoOfParagrafh(int noOfParagrafh) {
		this.noOfParagrafh = noOfParagrafh;
	}
	void display() {
		super.display();
		System.out.println("No of paragrafh: "+noOfParagrafh);
	}
	

}
