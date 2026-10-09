#include <string>

namespace log_line {
std::string message(std::string line) {
    int inner_message_start_index = line.find(" ");
    std::string sub = line.substr(inner_message_start_index + 1);
    return sub;
    // return the message
}

std::string log_level(std::string line) {
    int log_separtion = line.find("]");
    std::string level = line.substr(1, log_separtion - 1);
    return level;
    // return the log level
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string msg = message(line);
    std::string lvl = log_level(line);

    return msg + " " + "(" + lvl + ")";
}
}  // namespace log_line

