package iheritanceAramy8;

public class AirForce extends Defence {
	
	int noOfFmissils;
	int noOfAirCraft;
	int noOfSquadron;

	public AirForce(String nameofHead, String countryName, String locationOfHeadQuater, int noOfTroops, int noOfVehicle,
			int noOfBases, int noOfCasualtis, int noOfMissionPerformed, double budget, int noOfdept,
			int manPowerCount,int noOfFmissils,int noOfAirCraft,int noOfSquadron) {
		super(nameofHead, countryName, locationOfHeadQuater, noOfTroops, noOfVehicle, noOfBases, noOfCasualtis,
				noOfMissionPerformed, budget, noOfdept, manPowerCount);
	
		 this.noOfFmissils=noOfFmissils;
		this.noOfAirCraft=noOfAirCraft;
		this.noOfSquadron=noOfSquadron;
	}

	int getNoOfFmissils() {
		return noOfFmissils;
	}

	void setNoOfFmissils(int noOfFmissils) {
		this.noOfFmissils = noOfFmissils;
	}

	int getNoOfAirCraft() {
		return noOfAirCraft;
	}

	void setNoOfAirCraft(int noOfAirCraft) {
		this.noOfAirCraft = noOfAirCraft;
	}

	int getNoOfSquadron() {
		return noOfSquadron;
	}

	void setNoOfSquadron(int noOfSquadron) {
		this.noOfSquadron = noOfSquadron;
	}
	
	void display() {
		super.display();
		System.out.println("No Of Fmissils: "+noOfFmissils);
		System.out.println("No of AirCaft: "+noOfAirCraft);
		System.out.println("No of Squardrom: "+noOfSquadron);
	}
	

}
