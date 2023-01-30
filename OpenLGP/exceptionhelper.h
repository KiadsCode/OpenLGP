#pragma once

#include <string>
#include <exception>

namespace OpenLGP
{
    public ref class FileNotFoundException : public std::exception
    {
    private:
        std::string msg;

    public:
        FileNotFoundException(const std::string& message = "") : msg(message)
        {
        }

        const char* what() const noexcept
        {
            return msg.c_str();
        }
    };

    public ref class ArgumentOutOfRangeException : public std::exception
    {
    private:
        std::string msg;

    public:
        ArgumentOutOfRangeException(const std::string& message = "") : msg(message)
        {
        }

        const char* what() const noexcept
        {
            return msg.c_str();
        }
    };
}