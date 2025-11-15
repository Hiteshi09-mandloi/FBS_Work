package polymorphism;

//Base class
class HospitalStaff {
 private int staffId;
 private String name;
 private String department;

 // Constructor
 public HospitalStaff(int staffId, String name, String department) {
     this.staffId = staffId;
     this.name = name;
     this.department = department;
 }

 // Getters and Setters
 public int getStaffId() {
     return staffId;
 }

 public void setStaffId(int staffId) {
     this.staffId = staffId;
 }

 public String getName() {
     return name;
 }

 public void setName(String name) {
     this.name = name;
 }

 public String getDepartment() {
     return department;
 }

 public void setDepartment(String department) {
     this.department = department;
 }

 // Display method
 public void display() {
     System.out.println("Staff ID: " + staffId);
     System.out.println("Name: " + name);
     System.out.println("Department: " + department);
 }

 // Polymorphic method
 public void work() {
     System.out.println(name + " is working in the hospital.");
 }
}

//Subclass 1: Doctor
class Doctor extends HospitalStaff {
 private String specialization;

 public Doctor(int staffId, String name, String department, String specialization) {
     super(staffId, name, department);
     this.specialization = specialization;
 }

 public String getSpecialization() {
     return specialization;
 }

 public void setSpecialization(String specialization) {
     this.specialization = specialization;
 }

 
 public void display() {
     super.display();
     System.out.println("Specialization: " + specialization);
 }

 
 public void work() {
     System.out.println(getName() + " is treating patients as a " + specialization + " doctor.");
 }
}

//Subclass 2: Nurse
class Nurse extends HospitalStaff {
 private int assignedWard;

 public Nurse(int staffId, String name, String department, int assignedWard) {
     super(staffId, name, department);
     this.assignedWard = assignedWard;
 }

 public int getAssignedWard() {
     return assignedWard;
 }

 public void setAssignedWard(int assignedWard) {
     this.assignedWard = assignedWard;
 }

 
 public void display() {
     super.display();
     System.out.println("Assigned Ward: " + assignedWard);
 }

 
 public void work() {
     System.out.println(getName() + " is taking care of patients in ward " + assignedWard + ".");
 }
}

//Subclass 3: Surgeon
class Surgeon extends HospitalStaff {
 private int surgeriesPerWeek;

 public Surgeon(int staffId, String name, String department, int surgeriesPerWeek) {
     super(staffId, name, department);
     this.surgeriesPerWeek = surgeriesPerWeek;
 }

 public int getSurgeriesPerWeek() {
     return surgeriesPerWeek;
 }

 public void setSurgeriesPerWeek(int surgeriesPerWeek) {
     this.surgeriesPerWeek = surgeriesPerWeek;
 }

 
 public void display() {
     super.display();
     System.out.println("Surgeries Per Week: " + surgeriesPerWeek);
 }

 
 public void work() {
     System.out.println(getName() + " performs " + surgeriesPerWeek + " surgeries per week.");
 }
}

//Main class
public class TestHospital {
 public static void main(String[] args) {
     HospitalStaff doctor = new Doctor(101, "Dr. Meena", "Cardiology", "Cardiologist");
     HospitalStaff nurse = new Nurse(102, "Riya", "Emergency", 5);
     HospitalStaff surgeon = new Surgeon(103, "Dr. Arjun", "Surgery", 10);

   
     doctor.display();
     doctor.work();
     System.out.println("------------------");

     nurse.display();
     nurse.work();
     System.out.println("------------------");

     surgeon.display();
     surgeon.work();
 }
}

