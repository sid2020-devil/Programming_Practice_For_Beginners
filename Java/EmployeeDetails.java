class Employee
{
	String Name;
	int Age;
	String PhoneNumber;
	String Address;
	int Salary;

	public void printSalary()
	{
		System.out.println(Salary);
	}
}

class Officer extends Employee
{
	String Specialisation;
}


class Manager extends Employee
{
	String Department;
}

class EmployeeDetails
{
	public static void main(String[] args)
	{
			Officer o1 = new Officer();
			o1.Name = "Alexa";
			o1.Age  = 30;
			o1.PhoneNumber = "9234563444";
			o1.Address = "Skyline Kochi";
			o1.Salary = 50000;
			o1.Specialisation = "Business Analyst";

			System.out.println("Name: " + o1.Name);
			System.out.println("Age: " + o1.Age);
			System.out.println("PhoneNumber: " + o1.PhoneNumber);
			System.out.println("Address: " + o1.Address);
			System.out.println("Salary: " + o1.Salary);
			System.out.println("Specialisation: " + o1.Specialisation);


			Manager m1 = new Manager();
			m1.Name = "Suez";
			m1.Age  = 24;
			m1.PhoneNumber = "9634568787";
			m1.Address = "Rose Gardens Palakkad";
			m1.Salary = 30000;
			m1.Department = "Software Developer";

			System.out.println("Name: " + m1.Name);
			System.out.println("Age: " + m1.Age);
			System.out.println("PhoneNumber: " + m1.PhoneNumber);
			System.out.println("Address: " + m1.Address);
			System.out.println("Salary: " + m1.Salary);
			System.out.println("Department: " + m1.Department);

			
	}
}
	
