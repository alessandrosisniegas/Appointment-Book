# Alessandro Sisniegas
add: appointmentBook.o Time.o Appointment.o Book.o Date.o
	g++ appointmentBook.o Time.o Appointment.o Book.o Date.o -o add

appointmentBook.o: appointmentBook.cpp Book.h Time.h Appointment.h
	g++ -c appointmentBook.cpp -Wuninitialized -std=c++17

Time.o: Time.cpp Time.h
	g++ -c Time.cpp -Wuninitialized -std=c++17

Appointment.o: Appointment.cpp Appointment.h Date.h Time.h
	g++ -c Appointment.cpp -Wuninitialized -std=c++17

Book.o: Book.cpp Book.h Appointment.h Date.h Time.h
	g++ -c Book.cpp -Wuninitialized -std=c++17

Date.o: Date.cpp Date.h
	g++ -c Date.cpp -Wuninitialized -std=c++17

clean: 
	rm *.o	
	rm add

# target: dependencies
# command
# rm *.o (removes everything after the asterik in this case any file with .o)
# rm draw (removes the draw executable)