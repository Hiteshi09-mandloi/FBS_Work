package inheritanceFarmar9;

class OrganicFarmaer extends Farmar{

	int organicId;
	String cropType;
	String fertilizerUsed;
	
	public OrganicFarmaer(int farmarId, double landaArea, double annnualIncome, int noOfEquipment, double insurenceAmt,double annualIncome ,int organicId,String cropType,String fertilizerUsed) {
		super(farmarId, landaArea, annnualIncome, noOfEquipment, insurenceAmt, annualIncome);
		this.organicId=organicId;
		this.cropType=cropType;
		this.fertilizerUsed=fertilizerUsed;
	}

	int getOrganicId() {
		return organicId;
	}

	void setOrganicId(int organicId) {
		this.organicId = organicId;
	}

	String getCropType() {
		return cropType;
	}

	void setCropType(String cropType) {
		this.cropType = cropType;
	}

	String getFertilizerUsed() {
		return fertilizerUsed;
	}

	void setFertilizerUsed(String fertilizerUsed) {
		this.fertilizerUsed = fertilizerUsed;
	}
	
	void display() {
		super.display();
		System.out.println("organicId: "+organicId);
		System.out.println("cropType: "+cropType);
		System.out.println("farmarId: "+farmarId);
	}
	
	

}
