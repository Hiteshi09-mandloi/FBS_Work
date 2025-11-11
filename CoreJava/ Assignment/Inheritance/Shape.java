package inheritance4;

public class Shape {
	
	String color;
	String name;
	String field;
	String type;
	String getColor() {
		return color;
	}
	void setColor(String color) {
		this.color = color;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	String getField() {
		return field;
	}
	void setField(String field) {
		this.field = field;
	}
	String getType() {
		return type;
	}
	void setType(String type) {
		this.type = type;
	}
	
	void display() {
		System.out.println("Name is: "+name);
		System.out.println("Color is: "+color);
		System.out.println("field is: "+field);
		System.out.println("Type is: "+type);
	}
	public Shape(String color, String name, String field, String type) {

		this.color = color;
		this.name = name;
		this.field = field;
		this.type = type;
	}
	
	public Shape() {
		this.color = "ABC";
		this.name = "XYZ";
		this.field = "PQR";
		this.type = "STV";
	}

}
