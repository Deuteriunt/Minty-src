#pragma once
#include "../Json/json.hpp"

#include <string>
#include <istream>

nlohmann::json cfgjsonobj;
void saveFuncStateToJson(std::string funcName, bool state) {
    std::ifstream config_file("minty");
    nlohmann::json config_json;
    config_file >> config_json;
    config_file.close();

    cfgjsonobj["functions"][funcName] = state;
    config_json.merge_patch(cfgjsonobj);
    std::ofstream merged_file("minty");
    merged_file << config_json.dump(4);
    merged_file.close();
}

void saveFuncStateToJson(std::string funcName, float state) {
    std::ifstream config_file("minty");
    nlohmann::json config_json;
    config_file >> config_json;
    config_file.close();

    cfgjsonobj["functions"][funcName] = state;
    config_json.merge_patch(cfgjsonobj);
    std::ofstream merged_file("minty");
    merged_file << config_json.dump(4);
    merged_file.close();
}

void saveFuncStateToJson(std::string funcName, int state) {
    std::ifstream config_file("minty");
    nlohmann::json config_json;
    config_file >> config_json;
    config_file.close();

    cfgjsonobj["functions"][funcName] = state;
    config_json.merge_patch(cfgjsonobj);
    std::ofstream merged_file("minty");
    merged_file << config_json.dump(4);
    merged_file.close();
}