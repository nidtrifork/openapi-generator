/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Tag.h"

#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace client {
namespace model {

Tag::Tag(boost::property_tree::ptree const& pt)
{
        fromPropertyTree(pt);
}

std::string Tag::toJsonString(bool prettyJson /* = false */) const
{
    return toJsonString_internal(prettyJson);
}

void Tag::fromJsonString(std::string const& jsonString)
{
    fromJsonString_internal(jsonString);
}

boost::property_tree::ptree Tag::toPropertyTree() const
{
    return toPropertyTree_internal();
}

void Tag::fromPropertyTree(boost::property_tree::ptree const& pt)
{
    fromPropertyTree_internal(pt);
}

std::string Tag::toJsonString_internal(bool prettyJson) const
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void Tag::fromJsonString_internal(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Tag::toPropertyTree_internal() const
{
	ptree pt;
	ptree tmp_node;
	pt.put("id", m_Id);
	pt.put("name", m_Name);
	return pt;
}

void Tag::fromPropertyTree_internal(ptree const &pt)
{
	ptree tmp_node;
	m_Id = pt.get("id", 0L);
	m_Name = pt.get("name", "");
}

int64_t Tag::getId() const
{
    return m_Id;
}

void Tag::setId(int64_t value)
{
	m_Id = value;
}
std::string Tag::getName() const
{
    return m_Name;
}

void Tag::setName(std::string value)
{
	m_Name = value;
}

std::string createJsonStringFromModelVector(const std::vector<std::shared_ptr<Tag>>& data)
{
    std::stringstream output;
    output << '[';
    for (std::size_t i = 0; i < data.size(); ++i) {
        output << data[i]->toJsonString(false);
        if (i < data.size() - 1) {
            output << ", ";
        }
    }
    output << ']';
    return output.str();
}

void createModelVectorFromJsonString(std::vector<std::shared_ptr<Tag>>& vec, const std::string& json)
{
std::stringstream sstream(json);
    boost::property_tree::ptree pt;
    boost::property_tree::json_parser::read_json(sstream,pt);

    for (const auto& child: pt) {
        vec.emplace_back(std::make_shared<Tag>(child.second));
    }
}

}
}
}
}

