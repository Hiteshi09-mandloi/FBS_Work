package inheritanceFarmar9;

class PouttryFarmar extends Farmar {

	int noOfChickens;
	int noOfShadCapactl;
	double eagsProduceDay;
	String pultyFarmerName;
	
	
	public PouttryFarmar(int farmarId, double landaArea, double annnualIncome, int noOfEquipment, double insurenceAmt,
			double annualIncome,int noOfChickens,int noOfShadCapactl,double eagsProduceDay,String pultyFarmerName) {
		super(farmarId, landaArea, annnualIncome, noOfEquipment, insurenceAmt, annualIncome);
		this.noOfChickens=noOfChickens;
		this.noOfShadCapactl=noOfShadCapactl;
		this.eagsProduceDay=eagsProduceDay;
		this.pultyFarmerName=pultyFarmerName;
	}


	int getNoOfChickens() {
		return noOfChickens;
	}


	void setNoOfChickens(int noOfChickens) {
		this.noOfChickens = noOfChickens;
	}


	int getNoOfShadCapactl() {
		return noOfShadCapactl;
	}


	void setNoOfShadCapactl(int noOfShadCapactl) {
		this.noOfShadCapactl = noOfShadCapactl;
	}


	double getEagsProduceDay() {
		return eagsProduceDay;
	}


	void setEagsProduceDay(double eagsProduceDay) {
		this.eagsProduceDay = eagsProduceDay;
	}


	String getPultyFarmerName() {
		return pultyFarmerName;
	}


	void setPultyFarmerName(String pultyFarmerName) {
		this.pultyFarmerName = pultyFarmerName;
	}
	
	void display() {
		super.display();
		System.out.println("noOfChickens: "+noOfChickens);
		System.out.println("noOfShadCapactl: "+noOfShadCapactl);
		System.out.println("eagsProduceDay: "+eagsProduceDay);
		System.out.println("pultyFarmerName: "+pultyFarmerName);
	}

}
