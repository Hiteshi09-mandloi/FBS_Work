

public class SalesManager extends Employee {
         
	 double incentive;
	 double target;
	 
	 SalesManager(){
	     super();   
		 System.out.println("Defult Constructore call");
	        
	        this.target=200;
	        this.incentive=3000;
	    }
	    SalesManager(int id, String name, double salary, int target, double incentive) {
	       super(id,name,salary);
	    	System.out.println("Parameterized Constructor called");
	        this.target = target;
	        this.incentive = incentive;
	    }
	public double getIncentive() {
		return incentive;
	}
	public void setIncentive(double incentive) {
		this.incentive = incentive;
	}
	public double getTarget() {
		return target;
	}
	public void setTarget(double target) {
		this.target = target;
	}
	public void display(){
        super.display();
        System.out.println("Incentive: " + incentive);
        System.out.println("Target: " + target);
    }
	
	 double calSal() {
		  return salary+incentive;
	  }
	@Override
	public String toString() {
		return "SalesManager [incentive=" + incentive + ", target=" + target + ", id=" + id + ", name=" + name
				+ ", salary=" + salary + "]";
	}
      
	 

}
