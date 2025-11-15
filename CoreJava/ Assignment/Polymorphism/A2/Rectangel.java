

public class Rectangel extends Shape {
	
	double len,br;
	
	public Rectangel() {
		  super();
		  this.br=0.0;
			this.len=0.0;
	}
	
	
	public Rectangel(String color, String name, String field, String type,double br,double len) {
		super(color, name, field, type);
		this.br=br;
		this.len=len;
	}
	
	double getLen() {
		return len;
	}

	void setLen(double len) {
		this.len = len;
	}

	double getBr() {
		return br;
	}

	void setBr(double br) {
		this.br = br;
	}

	double area(){
		double a=len*br;
		return a;
	}
	
	void display() {
		super.display();
		System.out.println("Length: "+len);
		System.out.println("Bradth: "+br);
		System.out.println("Rectangle Area: "+area());
	}


	@Override
	public String toString() {
		super.toString();
		return "Rectangel [len=" + len + ", br=" + br + "]";
	}


	@Override
	void drow() {
		System.out.println("Rectangle");
		
	}

}
