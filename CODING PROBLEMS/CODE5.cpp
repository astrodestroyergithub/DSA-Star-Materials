/* The question is given below: 

class Accounts {
    int balance[100];
    
    void deposit_salary(int emp_id, int sal) {
        balance[emp_id] += sal;
    }
    
    // assume that constructors and other methods of the Accounts
    // class have reasonable definitions. Assume that this is
    // written in a language that allows methods of a class
    // to be optionally defined as 'synchronized' (in which case no two
    // threads can be in the same method at the same time
};

In your opinion, which of the following statements is true (select the best choice):

Select the closest option
(a) The deposit_salary method must always be synchronized
(b) The deposit_salary method must be synchronized only if it will be used simultaneously by multiple threads in the same program
(c) The deposit_salary method must be synchronized if it is possible that it can be called at the same time but in by different single-threaded programs, on the same computer.
(d) There is no need for the deposit_salary method to be synchronized
(e) None of the above

Ans: */
