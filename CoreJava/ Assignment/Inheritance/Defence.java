package iheritanceAramy8;

class Defence {
	
	String nameofHead;
	String countryName;
	String locationOfHeadQuater;
	int noOfTroops;
	int noOfVehicle;
	int noOfBases;
	int noOfCasualtis;
	int noOfMissionPerformed;
	double budget;
	int noOfdept;
	int manPowerCount;
	
	
	public Defence(String nameofHead, String countryName, String locationOfHeadQuater, int noOfTroops, int noOfVehicle,
			int noOfBases, int noOfCasualtis, int noOfMissionPerformed, double budget, int noOfdept,
			int manPowerCount) {
		this.nameofHead = nameofHead;
		this.countryName = countryName;
		this.locationOfHeadQuater = locationOfHeadQuater;
		this.noOfTroops = noOfTroops;
		this.noOfVehicle = noOfVehicle;
		this.noOfBases = noOfBases;
		this.noOfCasualtis = noOfCasualtis;
		this.noOfMissionPerformed = noOfMissionPerformed;
		this.budget = budget;
		this.noOfdept = noOfdept;
		this.manPowerCount = manPowerCount;
	}
	
	String getNameofHead() {
		return nameofHead;
	}
	void setNameofHead(String nameofHead) {
		this.nameofHead = nameofHead;
	}
	String getCountryName() {
		return countryName;
	}
	void setCountryName(String countryName) {
		this.countryName = countryName;
	}
	String getLocationOfHeadQuater() {
		return locationOfHeadQuater;
	}
	void setLocationOfHeadQuater(String locationOfHeadQuater) {
		this.locationOfHeadQuater = locationOfHeadQuater;
	}
	int getNoOfTroops() {
		return noOfTroops;
	}
	void setNoOfTroops(int noOfTroops) {
		this.noOfTroops = noOfTroops;
	}
	int getNoOfVehicle() {
		return noOfVehicle;
	}
	void setNoOfVehicle(int noOfVehicle) {
		this.noOfVehicle = noOfVehicle;
	}
	int getNoOfBases() {
		return noOfBases;
	}
	void setNoOfBases(int noOfBases) {
		this.noOfBases = noOfBases;
	}
	int getNoOfCasualtis() {
		return noOfCasualtis;
	}
	void setNoOfCasualtis(int noOfCasualtis) {
		this.noOfCasualtis = noOfCasualtis;
	}
	int getNoOfMissionPerformed() {
		return noOfMissionPerformed;
	}
	void setNoOfMissionPerformed(int noOfMissionPerformed) {
		this.noOfMissionPerformed = noOfMissionPerformed;
	}
	double getBudget() {
		return budget;
	}
	void setBudget(double budget) {
		this.budget = budget;
	}
	int getNoOfdept() {
		return noOfdept;
	}
	void setNoOfdept(int noOfdept) {
		this.noOfdept = noOfdept;
	}
	int getManPowerCount() {
		return manPowerCount;
	}
	void setManPowerCount(int manPowerCount) {
		this.manPowerCount = manPowerCount;
	}
	
	void display() {
		System.out.println("nameofHead: "+nameofHead);
		System.out.println("countryName: "+countryName);
		System.out.println("locationOfHeadQuater: "+locationOfHeadQuater);
		System.out.println("noOfTroops: "+noOfTroops);
		System.out.println("noOfVehicle: "+noOfVehicle);
		System.out.println("NoOfBases: "+noOfBases);
		System.out.println("noOfCasualtis: "+noOfCasualtis);
		System.out.println("noOfMissionPerformed: "+noOfMissionPerformed);
		System.out.println("budget: "+budget);
		System.out.println("noOfdept: "+noOfdept);
		System.out.println("manPowerCount: "+manPowerCount);
		
		
	}
	
	
	

}
