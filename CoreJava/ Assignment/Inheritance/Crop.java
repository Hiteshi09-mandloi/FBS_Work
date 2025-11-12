package inheritanceCrop11;

class Crop {
    String cropName;
    int growthDays;
    double waterRequired;      // liters per day
    double fertilizerAmount;   // kg per acre
    String soilType;           // common for all crops

    Crop(String cropName, int growthDays, double waterRequired, double fertilizerAmount, String soilType) {
        this.cropName = cropName;
        this.growthDays = growthDays;
        this.waterRequired = waterRequired;
        this.fertilizerAmount = fertilizerAmount;
        this.soilType = soilType;
    }

    void grow() {
        System.out.println(cropName + " is growing in " + soilType + " soil for " + growthDays + " days.");
    }

    void applyFertilizer() {
        System.out.println("Applying " + fertilizerAmount + " kg fertilizer per acre to " + cropName);
    }

    void display() {
        System.out.println("Crop Name: " + cropName);
        System.out.println("Growth Days: " + growthDays);
        System.out.println("Water Required: " + waterRequired + " L/day");
        System.out.println("Fertilizer: " + fertilizerAmount + " kg/acre");
        System.out.println("Soil Type: " + soilType);
    }
	}






