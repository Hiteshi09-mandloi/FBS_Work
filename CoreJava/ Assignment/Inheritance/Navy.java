package iheritanceAramy8;

class Navy extends Defence {
	
	int noOfShips;
	int noOfSuomaring;
	int noOfTorpedes;

	public Navy(String nameofHead, String countryName, String locationOfHeadQuater, int noOfTroops, int noOfVehicle,
			int noOfBases, int noOfCasualtis, int noOfMissionPerformed, double budget, int noOfdept,
			int manPowerCount,int noOfShips,int noOfSuomaring,int noOfTorpedes) {
		super(nameofHead, countryName, locationOfHeadQuater, noOfTroops, noOfVehicle, noOfBases, noOfCasualtis,
				noOfMissionPerformed, budget, noOfdept, manPowerCount);
		
		 this.noOfShips=noOfShips;
	    this.noOfSuomaring=noOfSuomaring;
		this.noOfTorpedes=noOfTorpedes;
	}

	int getNoOfShips() {
		return noOfShips;
	}

	void setNoOfShips(int noOfShips) {
		this.noOfShips = noOfShips;
	}

	int getNoOfSuomaring() {
		return noOfSuomaring;
	}

	void setNoOfSuomaring(int noOfSuomaring) {
		this.noOfSuomaring = noOfSuomaring;
	}

	int getNoOfTorpedes() {
		return noOfTorpedes;
	}

	void setNoOfTorpedes(int noOfTorpedes) {
		this.noOfTorpedes = noOfTorpedes;
	}
	
	void display() {
		System.out.println("noOfShips: "+noOfShips);
		System.out.println("noOfSuomaring: "+noOfSuomaring);
		System.out.println("noOfTorpedes: "+noOfTorpedes );
	}

}
