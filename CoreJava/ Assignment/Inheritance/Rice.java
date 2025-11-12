package inheritanceCrop11;

class Rice extends Crop {
	
	String irrigationType;
	
	Rice(String cropName, int growthDays, double waterRequired, double fertilizerAmount, String soilType,String irrigationType) {
		super(cropName, growthDays, waterRequired, fertilizerAmount, soilType);
		this.irrigationType = irrigationType;
	}

    String getIrrigationType() {
		return irrigationType;
	}

	void setIrrigationType(String irrigationType) {
		this.irrigationType = irrigationType;
	}

	void irrigate() {
	    System.out.println("Starting " + irrigationType + " irrigation for " + cropName);
	}

    void display() {
        System.out.println("\n--- RICE DETAILS ---");
        super.display();
        System.out.println("Irrigation Type: " + irrigationType);
    }  

}
