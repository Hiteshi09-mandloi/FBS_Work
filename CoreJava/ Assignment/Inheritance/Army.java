package iheritanceAramy8;

public class Army extends Defence{
	
	int noOftanks;
	int noOfGuns;
	int noOfGranads;
	int noOfDatallions;

	public Army(String nameofHead, String countryName, String locationOfHeadQuater, int noOfTroops, int noOfVehicle,
			int noOfBases, int noOfCasualtis, int noOfMissionPerformed, double budget, int noOfdept,
			int manPowerCount,	int noOftanks,int noOfGuns,int noOfGranads,int noOfDatallions)
	{
		super(nameofHead, countryName, locationOfHeadQuater, noOfTroops, noOfVehicle, noOfBases, noOfCasualtis,
				noOfMissionPerformed, budget, noOfdept, manPowerCount);
		
		 this.noOftanks=noOftanks;
		 this.noOfGuns=noOfGuns;
		this.noOfGranads=noOfGranads;
		 this.noOfDatallions=noOfDatallions;
		 
	}

	int getNoOftanks() {
		return noOftanks;
	}

	void setNoOftanks(int noOftanks) {
		this.noOftanks = noOftanks;
	}

	int getNoOfGuns() {
		return noOfGuns;
	}

	void setNoOfGuns(int noOfGuns) {
		this.noOfGuns = noOfGuns;
	}

	int getNoOfGranads() {
		return noOfGranads;
	}

	void setNoOfGranads(int noOfGranads) {
		this.noOfGranads = noOfGranads;
	}

	int getNoOfDatallions() {
		return noOfDatallions;
	}

	void setNoOfDatallions(int noOfDatallions) {
		this.noOfDatallions = noOfDatallions;
	}
	
	void display() {
		super.display();
		System.out.println("noOftanks: "+noOftanks);
		System.out.println("noOfGuns: "+noOfGuns);
		System.out.println("noOfGranads: "+noOfGranads);
		System.out.println("noOfDatallions: "+noOfDatallions);
	}

}
