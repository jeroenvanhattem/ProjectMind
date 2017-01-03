#ifndef LIGHTS_HPP
#define LIGHTS_HPP


/// Lights
//
/// Create the variables and functions
class lights {
private:
    int state;
public:
	lights(int state);
    void switch_lights(int value);
};

#endif //LIGHTS_HPP