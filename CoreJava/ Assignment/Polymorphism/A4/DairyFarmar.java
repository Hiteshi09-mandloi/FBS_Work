

class DairyFarmar extends Farmar {

	int noOfCattles;
	double milkProducedPerDay;
	int dairyLicenceNo;
	
	public DairyFarmar(int farmarId, double landaArea, double annnualIncome, int noOfEquipment, double insurenceAmt,
			double annualIncome,int noOfCattles,double milkProducedPerDay,int dairyLicenceNo) {
		super(farmarId, landaArea, annnualIncome, noOfEquipment, insurenceAmt, annualIncome);
		this.noOfCattles=noOfCattles;
		this.milkProducedPerDay=milkProducedPerDay;
		this.dairyLicenceNo=dairyLicenceNo;
	}

	int getNoOfCattles() {
		return noOfCattles;
	}

	void setNoOfCattles(int noOfCattles) {
		this.noOfCattles = noOfCattles;
	}

	double getMilkProducedPerDay() {
		return milkProducedPerDay;
	}

	void setMilkProducedPerDay(double milkProducedPerDay) {
		this.milkProducedPerDay = milkProducedPerDay;
	}

	int getDairyLicenceNo() {
		return dairyLicenceNo;
	}

	void setDairyLicenceNo(int dairyLicenceNo) {
		this.dairyLicenceNo = dairyLicenceNo;
	}
	
	void display() {
		super.display();
		System.out.println("noOfCattles: "+noOfCattles);
		System.out.println("milkProducedPerDay: "+milkProducedPerDay);
		System.out.println("dairyLicenceNo: "+dairyLicenceNo);
	}
	
	void calSubsidy() {
		System.out.println("recived subsidy by catels");
	}

	
}
