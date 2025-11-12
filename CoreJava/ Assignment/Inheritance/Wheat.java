package inheritanceCrop11;

class Wheat extends Crop {

	
	String grainQuality;
	
	Wheat(String cropName, int growthDays, double waterRequired, double fertilizerAmount, String soilType,String grainQuality) {
		super(cropName, growthDays, waterRequired, fertilizerAmount, soilType);
		this.grainQuality = grainQuality;
	}

    

    String getGrainQuality() {
		return grainQuality;
	}



	void setGrainQuality(String grainQuality) {
		this.grainQuality = grainQuality;
	}



	void harvest() {
        System.out.println("Harvesting " + grainQuality + " quality wheat...");
    }

    void display() {
        System.out.println("\n--- WHEAT DETAILS ---");
        super.display();
        System.out.println("Grain Quality: " + grainQuality);
    }
}
