package inheritance4;

public class Circal extends Shape {

	double r;
	public Circal(String color, String name, String field, String type,double r) {
		super(color,name,field,type);
		this.r = r;
	}

	double getR() {
		return r;
	}

	void setR(double r) {
		this.r = r;
	}

	double area()
	{
		double a=3.14*r*r;
		return a;	
	}
	
	void display() {
		super.display();
		System.out.println("Circal Area: "+area());
	}
}