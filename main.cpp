#include <string>
#include <iostream>
#include <turbobase64/turbob64.h>


int main(){


    std::string bytes{"nwlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarcbynecdyggxxpklorellnmpapqfwkhopkmcoqhnwnkuewhsqmgb"};
    size_t encLen = tb64enclen(bytes.length());

    std::string encoded_s(encLen, '=');
    tb64senc((const unsigned char*)&bytes[0], bytes.length(), (unsigned char*)&encoded_s[0]);
    std::cout << "s: " << encoded_s << std::endl;

    std::string encoded_x(encLen, '=');
    tb64xenc((const unsigned char*)&bytes[0], bytes.length(), (unsigned char*)&encoded_x[0]);
    std::cout << "x: " << encoded_x << std::endl;

    std::string encoded_v128(encLen, '=');
    tb64v128enc((const unsigned char*)&bytes[0], bytes.length(), (unsigned char*)&encoded_v128[0]);
    std::cout << "v128: " << encoded_v128 << std::endl;

    std::string encoded_v128a(encLen, '=');
    tb64v128aenc((const unsigned char*)&bytes[0], bytes.length(), (unsigned char*)&encoded_v128a[0]);
    std::cout << "v128a: " << encoded_v128a << std::endl;

    std::string encoded_v256(encLen, '=');
    tb64v256enc((const unsigned char*)&bytes[0], bytes.length(), (unsigned char*)&encoded_v256[0]);
    std::cout << "v256: " << encoded_v256 << std::endl;

    std::string encoded_v512(encLen, '=');
    tb64v512enc((const unsigned char*)&bytes[0], bytes.length(), (unsigned char*)&encoded_v512[0]);
    std::cout << "v512: " << encoded_v512 << std::endl;

}