#ifndef WHEELS_HPP
#define WHEELS_HPP


/// Wheels
//
/// Create the variables and functions
class wheels {
private:
    int state;
public:
	wheels(int state);
	void init();
	void forward(int force);
	void left(int force);
	void right(int force);
	void backward();
	void off();
};

#endif //WHEELS_HPP