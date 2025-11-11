package inheritance5;

class Vehical {
	
	String model;
	String color;
	String brand;
	double price;
	
	Vehical(String model, String color, String brand, double price) {
	
		this.model = model;
		this.color = color;
		this.brand = brand;
		this.price = price;
	}
	
	String getModel() {
		return model;
	}
	void setModel(String model) {
		this.model = model;
	}
	String getColor() {
		return color;
	}
	void setColor(String color) {
		this.color = color;
	}
	String getBrand() {
		return brand;
	}
	void setBrand(String brand) {
		this.brand = brand;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		this.price = price;
	}
	
	void display() {
		System.out.println("Model: "+model);
		System.out.println("Brand: "+brand);
		System.out.println("Color: "+color);
		System.out.println("Price: "+price);
	}
	

}
