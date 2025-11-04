class Admin{
  int id;
  String name;
  String allowrnce;

 void setId(int id){this.id=id;}
 void setName(String name){this.name=name;}
 void setAllowrnce(String a){this.allowrnce=a;}
 int getId(){return this.id;}
String getName(){return this.name;}
String getAllowrnce(){return this.allowrnce;}
}
class TestAdmin{
  public static void main(String[] args){
   Admin a=new Admin();
   a.setId(1);
   a.setName("Hiteshi");
   a.setAllowrnce("gs");

  System.out.println("Id:-"+a.getId());
  System.out.println("Name:-"+a.getName());
  System.out.println("Allowrnce:-"+a.getAllowrnce());
}
}
