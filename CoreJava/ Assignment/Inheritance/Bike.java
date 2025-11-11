package inheritance5;

class Bike extends Vehical {

	String type;
	 
	
	Bike(String model, String color, String brand, double price,String type) {
		super(model, color, brand, price);
	    this.type=type;	
	}


	String getType() {
		return type;
	}


	void setType(String type) {
		this.type = type;
	}
   
	void display() {
		super.display();
		System.out.println("Type: "+type);
	}

}
