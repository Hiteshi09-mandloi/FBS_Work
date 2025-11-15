

class Farmar {
	
	int farmarId;
	double landaArea;
	double annnualIncome;
	int noOfEquipment;
    double insurenceAmt;
	
	
	public Farmar(int farmarId, double landaArea, double annnualIncome, int noOfEquipment, double insurenceAmt,
			double annualIncome) {
		
		this.farmarId = farmarId;
		this.landaArea = landaArea;
		this.annnualIncome = annnualIncome;
		this.noOfEquipment = noOfEquipment;
		this.insurenceAmt = insurenceAmt;
		
	}
	double getInsurenceAmt() {
		return insurenceAmt;
	}
	void setInsurenceAmt(double insurenceAmt) {
		this.insurenceAmt = insurenceAmt;
	}
	int getFarmarId() {
		return farmarId;
	}
	void setFarmarId(int farmarId) {
		this.farmarId = farmarId;
	}
	double getLandaArea() {
		return landaArea;
	}
	void setLandaArea(double landaArea) {
		this.landaArea = landaArea;
	}
	double getAnnnualIncome() {
		return annnualIncome;
	}
	void setAnnnualIncome(double annnualIncome) {
		this.annnualIncome = annnualIncome;
	}
	int getNoOfEquipment() {
		return noOfEquipment;
	}
	void setNoOfEquipment(int noOfEquipment) {
		this.noOfEquipment = noOfEquipment;
	}	
	
	void display() {
		System.out.println("farmarId: "+farmarId);
		System.out.println("landaArea: "+landaArea);
		System.out.println("insurenceAmt"+insurenceAmt);
		System.out.println("noOfEquipment: "+noOfEquipment);
		System.out.println("annnualIncome: "+annnualIncome);
		
	}
	
	void calSubsidy() {
		System.out.println("recived subsidy");
	}
	

}
