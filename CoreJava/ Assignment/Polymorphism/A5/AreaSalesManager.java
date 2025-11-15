

class AreaSalesManager extends SalesManager {
        
	String areaName;
	
	public AreaSalesManager() {
		super();
	}

	public AreaSalesManager(int id, String name, double salary, int target, double incentive,String areaName) {
		super(id,name,salary,target,incentive);
		this.areaName = areaName;
	}

	String getAreaName() {
		return areaName;
	}

	void setAreaName(String areaName) {
		this.areaName = areaName;
	}
	
	public void display(){
		
		super.display();
		System.out.println("Area Name: "+areaName);
	}
	
	 double calSal() {
		  return salary+incentive;
	  }

	@Override
	public String toString() {
		return "AreaSalesManager [areaName=" + areaName + ", incentive=" + incentive + ", target=" + target + ", id="
				+ id + ", name=" + name + ", salary=" + salary + "]";
	}
	 
	
	

}
