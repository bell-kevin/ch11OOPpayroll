# ch11OOPpayroll

You have seen payroll projects several times previously to look at different aspects of programming. In this assignment, you will look at an Object-Oriented Programming approach to payroll. 

The project needs an Employee class, which has 3 variables: a string for employee type ("h" for hourly, "s" for salaried); a string for the employee's name; and a double for the employee's pay rate. If the employee is hourly, that pay rate will be the hourly rate. If the employee is salaried, that pay rate will be the annual wage. The class needs a constructor and a function to display the employee's name and pay rate. See the examples below to see what that function should produce.

Create a class for hourly employees and a class for salaried employees; those classes inherit the Employee class as a protected class. Use initialization lists to create the employee objects. These classes each need a function to calculate the pay for that type of employee. Those functions will display the info about the employee (name and type of pay, from the display method in the employee class), then calculate the gross pay for this type of employee, then print out the result.

The main function will instantiate 4 employees, 2 that are hourly and 2 that are salaried. Then call the methods to calculate the pay with the hours worked. Hard code those instantiations, you don't have to ask the user for the input. Here is an example of the main function:

Ch 11 Payroll main

You may use the same data or come up with your own names and numbers.

The output should look like this:

![Ch 11 Payroll example](https://github.com/bell-kevin/ch11OOPpayroll/blob/main/ch11OOPpayroll/payroll.PNG)

Take a screenshot of the results.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
