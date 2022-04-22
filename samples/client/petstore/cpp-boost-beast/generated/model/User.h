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

/*
 * User.h
 *
 * A User who is purchasing from the pet store
 */

#ifndef BOOST_BEAST_OPENAPI_CLIENT_User_MODEL_H_
#define BOOST_BEAST_OPENAPI_CLIENT_User_MODEL_H_


#include <string>
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// A User who is purchasing from the pet store
/// </summary>
class  User 
{
public:
    User() = default;
    explicit User(boost::property_tree::ptree const& pt);
    virtual ~User() = default;

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// User members

    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::string getUsername() const;
    void setUsername(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getFirstName() const;
    void setFirstName(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getLastName() const;
    void setLastName(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getEmail() const;
    void setEmail(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getPassword() const;
    void setPassword(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getPhone() const;
    void setPhone(std::string value);

    /// <summary>
    /// User Status
    /// </summary>
    int32_t getUserStatus() const;
    void setUserStatus(int32_t value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false) const;
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal() const;
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    int64_t m_Id = 0L;
    std::string m_Username = "";
    std::string m_FirstName = "";
    std::string m_LastName = "";
    std::string m_Email = "";
    std::string m_Password = "";
    std::string m_Phone = "";
    int32_t m_UserStatus = 0;
};

std::string createJsonStringFromModelVector(const std::vector<std::shared_ptr<User>>& data);

void createModelVectorFromJsonString(std::vector<std::shared_ptr<User>>& vec, const std::string& json);


}
}
}
}


#endif /* BOOST_BEAST_OPENAPI_CLIENT_User_MODEL_H_ */
