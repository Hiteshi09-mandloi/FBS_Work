class Employee{
   int id;
   String name;
   double salary;
  void setId(int d){this.id=d;}
  void setName(String n){this.name=n;}
  void setSalary(double s){this.salary=s;}
  int getId(){
   return this.id;
  }
  String getName(){
   return this.name;
  }
  double getSalary(){
    return this.salary;
  }
}
// employee ends here

class TestEmp{
  public static void main(String[] args){
   Employee e1=new Employee();
   e1.setId(1);
   e1.setName("Hiteshi");
   e1.setSalary(250000);

   System.out.println("Id:-"+e1.getId());
   System.out.println("Name:-"+e1.getName());
   System.out.println("Salaey:-"+e1.getSalary());
}
}