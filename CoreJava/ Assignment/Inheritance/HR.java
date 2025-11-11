package inheritanceSecond;

public class HR extends Employee{

	  
	    double commission;

	    HR()
	    {
	       super();
	       this.commission=3000;
	    }

	      HR(int a,String n,double s,double c){
	         super(a,n,s);
	        this.commission=c;
	    }

	   

	    void setCommission(double c) {
	        this.commission = c;
	    }
	    
	    double getCommission(){
	        return this.commission;
	    }
	    void display(){
	        super.display();
	        System.out.println("Commission: " + commission);
	    }
}
