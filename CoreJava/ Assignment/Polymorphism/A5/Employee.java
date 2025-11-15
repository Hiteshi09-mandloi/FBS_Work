
abstract class Employee{


	int id;
	   String name;
	   double salary;

	   Employee(){
	       this.id=1;
	       this.name="Hiteshi";
	       this.salary=25000;
	   }
	   Employee(int x,String n,double s){
	       this.id=x;
	       this.name=n;
	       this.salary=s;
	   }
	  void setId(int d){this.id=d;}
	  void setName(String n){this.name=n;}
	  void setSalary(double s){this.salary=s;}
	  int getId(){
	   return this.id;
	  }
	  String getName(){
	   return this.name;
	  }
	  double getSalary(){
	    return this.salary;
	  }
	  void display(){
	      System.out.println("Id:-"+id);
	      System.out.println("Name:-"+name);
	      System.out.println("Salaey:-"+salary);
	  }
	  
	  abstract double calSal();
	  
	   @Override
	public String toString() {
		return "Employee [id=" + id + ", name=" + name + ", salary=" + salary + "]";
	}
		 
	}
	// employee ends here

	

