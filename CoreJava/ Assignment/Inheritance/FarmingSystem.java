package inheritanceCrop11;

class FarmingSystem {
	
	 public static void main(String[] args) {
	        Wheat wheat = new Wheat("Wheat", 120, 45.0, 18.0, "Loamy", "High Protein");
	        Rice rice = new Rice("Rice", 150, 70.0, 22.0, "Clay", "Flood");
	        Sugarcane sugarcane = new Sugarcane("Sugarcane", 300, 120.0, 25.0, "Sandy Loam", 450.0);

	        // Wheat
	        wheat.grow();
	        wheat.applyFertilizer();
	        wheat.harvest();
	        wheat.display();

	        // Rice
	        rice.grow();
	        rice.applyFertilizer();
	        rice.irrigate();
	        rice.display();

	        // Sugarcane
	        sugarcane.grow();
	        sugarcane.applyFertilizer();
	        sugarcane.extractJuice();
	        sugarcane.display();
	    }

}
