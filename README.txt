Project 3

README

Project Group 21

Milestone 1

Brief Introduction:

	There are 6 .cpp files in this project, which are main.cpp, slot.cpp, Floor.cpp, parkingLot.cpp, Ticket.cpp, Vehicle.cpp. 
	
	main.cpp is used to call all the related functions and classes. 
                    Slot is the minimum unit of a floor, which means that a floor contains several slots. 
	    Every floor contains 5x5 slots.
                    Similarly, floor is the minimum unit of parkingLot, which means several floors form a parkingLot.
	(attention: we define 1s in real life to be 10 minutes in the programme)
	
	Ticket.cpp contains all the methods and attributes related to ticket, such as printing, recording the time, calculate the price,etc.
	
	Vehicle.cpp contains all the methods and attributes related to vehicles, such as arriving, departing,etc.
	
Main Idea:
	1.the initialization
	2.the for loop: 1)printleaving(vector<Vehicle>)->/*for every floor*/floor.refresh()->(for every slot)we randomly judge whether the vehicle will go or not,if it will, we return a Vehicle
                                            by doing this, we can get a vector of vehicles leaving and then print their tickets
		        2)parkingLot.refreshIn()/* just simply initialze the slot and print the arrival ticket*/

Initialzation:
		
             ATTENTION: as a player, you need to edit configurations, which can be found in"run",
	 and write something in programme argument such as"--time 25"(25 means the number of cars , which you can change)
	 you can also create your own parkingLot. You may do this following these procedures:
	 1) write all the names of the type of vehicles you want a parkingLot to accept in a file, separating each name with a space or \n(whatever white space character you like)
	 2) when running the program, add a "--file" command line argument and follow it with the relative path of the file mentioned above.
	 3) successfully run!
		if no files are provided, we will take  "Car", "Van", "Motorbike", "Bicycle" by default.

	as a player, at first, you need to initialize the prices for every kind of vehicle respectively	

Detailed Description:

	Because most of those .cpp files above are the implementation of the interfaces of different classes, I would like to directly explain those classes.
	
	Class Slot:
		Every slot has its type. which is related to the vehicles. That's because the basic floor needs to make all the vehicles stop on this floor belonging to the same type, so that drivers can easily identify which floor to go. And circumstances such as a bike occupying a slot for cars will never happen.
		
		When a slot is initialized, it is empty. And there are methods to identify whether it is empty and also to change its mode.
		
		We put the method "put_vehicle" here which can be easily linked to the methods in the class "ParkingLot"��so as "push_vehicle"
		
	Class Floor:	
		Every floor has its type, size(row and column), and index(indicates which floor). Because of the setting of the row and column, some situations such as on different columns, there will be different numbers of slots will never happen, which can let the floor look more tidy.
		
		We use a vector to store an empty slot's [row][column]
		
	Class ParkingLot:		
		We use map to define the variable "floors", which contains a string(indicates its type) and a floor(a type defined in floor.cpp)

		We use clearSlot and pushSlot to do the basic function that a parkingLot needs to do. In pushSlot, there is a code which is linked to a slot method "put_vehicle".
		
	Class Ticket:	
		There are a variable "type" and a virtual method "print" in it.
		
		There are 2 classes inheriting Class Ticket: ArriTicket and DepartTicket.
		
		Class ArriTicket:
			A specific method "print" is stated, only for printing the information when arriving.
			
			Method "set" is used to initialize the statement of the ticket.
			
		Class DepartTicket:
			A specific "print" method is stated, only for printing the information when departing.
			
			Method "set" is used to set the final statement of the ticket.
			
	Class Vehicle:
		Several methods are stated to get the related data. Here we use local time as the standard of the consuming of the time, which means that all the times will be transformed into the form of local time first, and then do the calculation.
		
		Method "setPrice" is used to set the different prices of different vehicles by inputing.
		