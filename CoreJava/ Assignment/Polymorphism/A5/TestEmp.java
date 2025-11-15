

class TestEmp{
	  public static void main(String[] args){
	   Employee e1;//=new Employee();
//	   e1.display();
//	   e1.setId(1);
//	   e1.setName("Hiteshi");
//	   e1.setSalary(250000);
//	   Employee e2=new Employee(2,"Ganesh",250000);
	   e1=new SalesManager(4,"Akshdeep",45000,200,3000);

	   SalesManager s2=new SalesManager(4,"Akshdeep",45000,200,3000);
	   Admin a1=new Admin(1,"Hiteshi",35000,2);
	   HR h2=new HR(3,"Shivanshi",50000,3000);
	   System.out.println("-------------------------------------");
	   e1.display();
	   System.out.println("-------------------------------------");
	   e1.display();
	   System.out.println("-------------------------------------");
	   e1.display();
	   System.out.println("-------------------------------------");
	   
	   AreaSalesManager as=new AreaSalesManager(105,"Dipesh",40000, 2000, 2500,"Khargone");
	   
	   as.display();
	   
	   System.out.println(as.calSal());
	   System.out.println(a1.calSal());
	   System.out.println(h2.calSal());
	   //System.out.println(s1.calSal());

	}
	}

