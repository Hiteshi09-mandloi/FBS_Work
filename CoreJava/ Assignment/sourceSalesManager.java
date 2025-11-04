class SalesManager {
    int id;
    String name;
    double salary;
    double incentive;
    double target;

    void setId(int i) {
        this.id = i;
    }

    void setName(String n) {
        this.name = n;
    }

    void setSalary(double s) {
        this.salary = s;
    }

    void setIncentive(double inc) {
        this.incentive = inc;
    }

    void setTarget(double t) {
        this.target = t;
    }
    int getId(){return this.id;}
    String getName(){return this.name;}
    double getSalary(){return  this.salary;}
    double getIncentive(){return  this.incentive;}
    double getTarget(){return this.target;}
} // SalesManager class ends here


class TestSalesManager {
    public static void main(String[] args) {
        SalesManager s1;
        s1 = new SalesManager();
        s1.setId(3);
        s1.setName("Pragya");
        s1.setSalary(30000);
        s1.setIncentive(2500.00);
        s1.setTarget(50000.00);

        System.out.println("Id: " + s1.getId());
        System.out.println("Name: " + s1.getName());
        System.out.println("Salary: " + s1.getSalary());
        System.out.println("Incentive: " + s1.getIncentive());
        System.out.println("Target: " + s1.getTarget());
    } // main class ends
}
