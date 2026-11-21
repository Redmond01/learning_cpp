/**
 * variable in cpp is an object that is an identifier, and this is majorly used to access data in the memory
 * the main reason that cpp uses this, is to reduce error, giving the compiler to access the data itself,
 * rather than programers having access to manually interact with data themselves.
 * 
 * 
 * variable are also called an IDENTIFIER, that is what cpp, will use to locate the data a program needs.
 * 
 * 
 * how to create a varialble in cpp, we use the syntax below.
 * 
 * type >>  variable_name (identifier) >> assignment >> value
 * 
 * ps: (the >> used above, is to indicate the next step after the previous step is created).
 * 
 * example of a variable creation is to create a variable that define a student age which is 17:
 * 
 *                               (int student_age = 17;)
 * 
 * the above is a variable created into the memory, and then named "student_age" assiginig a value of "17" to it.
 * 
 * THERE IS ANOTHER WAY TO INITIALIZE A VARIABLE IN CPP READ BELOW:
 * In cpp there is another way to initialize variable aside from using the "=" character, and that will be 
 * demonstraated below.
 * 
 * 
 *                              (int total_oranges {30};)
 * 
 * The above declaration, is a another way of creating a variable in cpp application.
 * 
 * 
 * 
 * DIFFIRENCE BETWEEN THE = ASSIGNMENT AND {} ASSIGNMENT OF VARIABLE:
 * 
 * The first thing is to understand how the values are been passed into the variable memory adddress.
 * when a variable is decleare, and intialized, the value that is been intitialized into the varialble,
 * is compiled and copmuted into bytes, and placed in thee register, the register in this case do not have 
 * anything to do with the ram, but it is buillt as part of the cpu components to execute instructions.
 * 
 * So the value bytes are in the register, and then when the cpu needs to add the byte into the memory address
 * then it copies the bytes of variable in the register, and add to the memory address of your vairalbe.
 * 
 * 
 * 
 * The first part of the reason why using the curl "{}" to declear avarialble, is bcs the {} ensures that the 
 * memory location is clean of any gabage
 * 
 * The second part is that the {} wont allow you to assign a value that wont fit into th memory allocated i.e
 * 
 * int number = 3.9; this will compile well but it is not suppose, bcs 3.9 is a float or double type, but the {}
 * wil through an error from the starting without compiling. so the {} is like a safe haven.
 *
 */