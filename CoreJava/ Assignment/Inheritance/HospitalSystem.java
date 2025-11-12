package inheritanceHospitalSys13;

//Base class
class Staff {
 String name;
 int id;
 double salary;
 String department;

 Staff(String name, int id, double salary, String department) {
     this.name = name;
     this.id = id;
     this.salary = salary;
     this.department = department;
 }

 void display() {
     System.out.println("Name: " + name);
     System.out.println("ID: " + id);
     System.out.println("Department: " + department);
     System.out.println("Salary: ₹" + salary);
 }
}

//Subclass 1: Doctor
class Doctor extends Staff {
 String specialization;
 int patientsPerDay;
 boolean onCall;

 Doctor(String name, int id, double salary, String department, String specialization, int patientsPerDay, boolean onCall) {
     super(name, id, salary, department);
     this.specialization = specialization;
     this.patientsPerDay = patientsPerDay;
     this.onCall = onCall;
 }

 void treatPatient() {
     System.out.println("Treating patients in " + specialization + " department.");
     System.out.println("Average patients per day: " + patientsPerDay);
     System.out.println("On call duty: " + (onCall ? "Yes" : "No"));
 }
 
 void display() {
     System.out.println("---- Doctor Details ----");
     super.display();
     System.out.println("Specialization: " + specialization);
     System.out.println("Patients per Day: " + patientsPerDay);
     System.out.println("On Call: " + (onCall ? "Yes" : "No"));
     System.out.println("------------------------");
 }
}

//Subclass 2: Nurse
class Nurse extends Staff {
 String shift; // morning, evening, night
 int patientsAssigned;
 boolean emergencyTrained;

 Nurse(String name, int id, double salary, String department, String shift, int patientsAssigned, boolean emergencyTrained) {
     super(name, id, salary, department);
     this.shift = shift;
     this.patientsAssigned = patientsAssigned;
     this.emergencyTrained = emergencyTrained;
 }

 void assistDoctor() {
     System.out.println("Assisting doctor during " + shift + " shift.");
     System.out.println("Patients assigned: " + patientsAssigned);
     System.out.println("Emergency trained: " + (emergencyTrained ? "Yes" : "No"));
 }
 
 void display() {
     System.out.println("---- Nurse Details ----");
     super.display();
     System.out.println("Shift: " + shift);
     System.out.println("Patients Assigned: " + patientsAssigned);
     System.out.println("Emergency Trained: " + (emergencyTrained ? "Yes" : "No"));
     System.out.println("-----------------------");
 }
 
}

//Subclass 3: Technician
class Technician extends Staff {
 String equipmentHandled;
 int hoursPerDay;
 boolean certified;

 Technician(String name, int id, double salary, String department, String equipmentHandled, int hoursPerDay, boolean certified) {
     super(name, id, salary, department);
     this.equipmentHandled = equipmentHandled;
     this.hoursPerDay = hoursPerDay;
     this.certified = certified;
 }

 void operateEquipment() {
     System.out.println("Operating " + equipmentHandled + " equipment.");
     System.out.println("Working hours per day: " + hoursPerDay);
     System.out.println("Certification: " + (certified ? "Valid" : "Not Certified"));
 }
 
 void display() {
     System.out.println("---- Technician Details ----");
     super.display();
     System.out.println("Equipment Handled: " + equipmentHandled);
     System.out.println("Working Hours/Day: " + hoursPerDay);
     System.out.println("Certified: " + (certified ? "Yes" : "No"));
     System.out.println("-----------------------------");
 }
}

//Main class to test
public class HospitalSystem {
 public static void main(String[] args) {
     Doctor doc = new Doctor("Dr. Meera", 101, 95000, "Cardiology", "Heart Specialist", 25, true);
     Nurse nurse = new Nurse("Anjali", 202, 45000, "Pediatrics", "Night", 15, true);
     Technician tech = new Technician("Ravi", 303, 40000, "Radiology", "X-Ray Machine", 8, true);

     System.out.println("--- Doctor Details ---");
     doc.display();
     doc.treatPatient();

     System.out.println("\n--- Nurse Details ---");
     nurse.display();;
     nurse.assistDoctor();

     System.out.println("\n--- Technician Details ---");
     tech.display();
     tech.operateEquipment();
 }
}
