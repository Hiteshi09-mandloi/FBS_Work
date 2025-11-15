package polymorphism;

//Base class
class Artist {
 private String name;
 private int age;
 private String genre;

 // Default constructor
 Artist() {
     this.name = "Unknown";
     this.age = 0;
     this.genre = "Unknown";
 }

 // Parameterized constructor
 Artist(String name, int age, String genre) {
     this.name = name;
     this.age = age;
     this.genre = genre;
 }

 // Getters
 public String getName() { return name; }
 public int getAge() { return age; }
 public String getGenre() { return genre; }

 // Setters
 public void setName(String name) { this.name = name; }
 public void setAge(int age) { this.age = age; }
 public void setGenre(String genre) { this.genre = genre; }

 // Common method (to be overridden)
 void perform() {
     System.out.println("Artist is performing...");
 }

 // Display base attributes
 void display() {
     System.out.println("Name: " + name);
     System.out.println("Age: " + age);
     System.out.println("Genre: " + genre);
 }
}

//Subclass 1 — Singer
class Singer extends Artist {
 private String vocalType; // unique attribute

 Singer(String name, int age, String genre, String vocalType) {
     super(name, age, genre);
     this.vocalType = vocalType;
 }

 public String getVocalType() { return vocalType; }
 public void setVocalType(String vocalType) { this.vocalType = vocalType; }

 @Override
 void perform() {
     System.out.println("Singer is singing melodiously 🎤...");
 }

 @Override
 void display() {
     super.display();
     System.out.println("Unique Attribute → Vocal Type: " + vocalType);
 }
}

//Subclass 2 — Dancer
class Dancer extends Artist {
 private String danceStyle; // unique attribute

 Dancer(String name, int age, String genre, String danceStyle) {
     super(name, age, genre);
     this.danceStyle = danceStyle;
 }

 public String getDanceStyle() { return danceStyle; }
 public void setDanceStyle(String danceStyle) { this.danceStyle = danceStyle; }

 @Override
 void perform() {
     System.out.println("Dancer is performing a graceful dance 💃...");
 }

 @Override
 void display() {
     super.display();
     System.out.println("Unique Attribute → Dance Style: " + danceStyle);
 }
}

//Subclass 3 — Painter
class Painter extends Artist {
 private String medium; // unique attribute

 Painter(String name, int age, String genre, String medium) {
     super(name, age, genre);
     this.medium = medium;
 }

 public String getMedium() { return medium; }
 public void setMedium(String medium) { this.medium = medium; }

 @Override
 void perform() {
     System.out.println("Painter is creating a masterpiece 🎨...");
 }

 @Override
 void display() {
     super.display();
     System.out.println("Unique Attribute → Painting Medium: " + medium);
 }
}

//Main class
public class TestArtist {
 public static void main(String[] args) {
     // Polymorphism demonstration
     Artist a1 = new Singer("Arijit Singh", 37, "Music", "Tenor");
     Artist a2 = new Dancer("Madhuri Dixit", 56, "Bollywood", "Kathak");
     Artist a3 = new Painter("M.F. Husain", 95, "Modern Art", "Oil Paint");

     a1.display();
     a1.perform();
     System.out.println("--------------------");

     a2.display();
     a2.perform();
     System.out.println("--------------------");

     a3.display();
     a3.perform();
 }
}

