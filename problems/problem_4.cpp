#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::istringstream iss(macAddress);
    std::string octet;
    getline(iss,octet,':');
    int firstOctet;
    std::stringstream(octet) >> std::hex >> firstOctet;
    if (firstOctet % 2 == 0) {
        return "Unicast";
    }
    else if (firstOctet %2 != 0 and firstOctet != 255){
        return "Multicast";
    }
    else if (firstOctet == 255) {
        return "Broadcast";
    }
    // make use of control flow statements
    // return result;
}
