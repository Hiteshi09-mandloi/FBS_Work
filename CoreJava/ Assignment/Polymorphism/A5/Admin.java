//package inheritanceSecond;

public class Admin extends Employee {

	 int allowrnce;
	 Admin(){
		 
		 super();
		 System.out.println("Defult Con. Admin");
		  this.allowrnce=1;
		}

	public Admin(int a,String n,double s,int al){
		super(a,n,s);
		this.allowrnce = allowrnce;
		System.out.println("pera Con. Admin");
	}

	public int getAllowrnce() {
		return allowrnce;
	}

	public void setAllowrnce(int allowrnce) {
		this.allowrnce = allowrnce;
	}
	 void display(){
		  super.display();
		  System.out.println("Allowrnce:-"+allowrnce);
		}
	 
	 double calSal() {
		  return salary+allowrnce;
	  }

	@Override
	public String toString() {
		return "Admin [allowrnce=" + allowrnce + ", id=" + id + ", name=" + name + ", salary=" + salary + "]";
	}
	 
	 
}
