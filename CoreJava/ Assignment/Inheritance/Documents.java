package inheritance_3;

public class Documents {

	String name;
	int size;
	int noOfPages;
	
	public Documents() {
		
	}
	
	public Documents(String name, int size, int noOfPages) {
		this.name = name;
		this.size = size;
		this.noOfPages = noOfPages;
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getSize() {
		return size;
	}
	public void setSize(int size) {
		this.size = size;
	}
	public int getNoOfPages() {
		return noOfPages;
	}
	public void setNoOfPages(int noOfPages) {
		this.noOfPages = noOfPages;
	}
	void display() {
		System.out.println("Doc Name: "+name);
		System.out.println("Doc Size: "+size);
		System.out.println("No of Pages: "+noOfPages);
	}
	
}
