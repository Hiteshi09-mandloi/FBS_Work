package inheritance5;

class Car extends Vehical{
	
	int noOfDoors;
	
	Car(String model, String color, String brand, double price,int noOfDoors) {
		super(model, color, brand, price);
		this.noOfDoors=noOfDoors;
	}

	int getNoOfDoors() {
		return noOfDoors;
	}

	void setNoOfDoors(int noOfDoors) {
		this.noOfDoors = noOfDoors;
	}

    void display() {
    	super.display();
    	System.out.println("No Of Doors: "+noOfDoors);
    }
	

}
