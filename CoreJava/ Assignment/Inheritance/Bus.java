package inheritance5;

class Bus extends Vehical {
	
	int noOfSheets;
	
	Bus(String model, String color, String brand, double price,int n) {
		super(model, color, brand, price);
		this.noOfSheets=n;
	}

	int getNoOfSheets() {
		return noOfSheets;
	}

	void setNoOfSheets(int noOfSheets) {
		this.noOfSheets = noOfSheets;
	}
    
	void display() {
		super.display();
		System.out.println("NO OF SHEETS: "+noOfSheets);
	}

	

}
