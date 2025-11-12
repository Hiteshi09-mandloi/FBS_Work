package inheritanceCrop11;

class Sugarcane extends Crop {
	
    double juiceYield; // liters per ton (specific to Sugarcane)

    Sugarcane(String cropName, int growthDays, double waterRequired, double fertilizerAmount, String soilType, double juiceYield) {
        super(cropName, growthDays, waterRequired, fertilizerAmount, soilType);
        this.juiceYield = juiceYield;
    }

    void extractJuice() {
        System.out.println("Extracting " + juiceYield + " L juice per ton from " + cropName);
    }

    void display() {
        System.out.println("\n--- SUGARCANE DETAILS ---");
        super.display();
        System.out.println("Juice Yield: " + juiceYield + " L/ton");
    }

}
